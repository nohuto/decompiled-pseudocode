/*
 * XREFs of CmpCmdHiveOpen @ 0x1404DD728
 * Callers:
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     PsReferenceImpersonationTokenEx @ 0x14049D120 (PsReferenceImpersonationTokenEx.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 *     CmpInitHiveFromFile @ 0x1404DE1EC (CmpInitHiveFromFile.c)
 *     RtlImpersonateSelfEx @ 0x140585C08 (RtlImpersonateSelfEx.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        PCUNICODE_STRING Source,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        BOOLEAN a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  BOOLEAN v11; // r14
  __int64 v12; // rbx
  NTSTATUS inited; // eax
  NTSTATUS v14; // edi
  unsigned int v15; // eax
  int v16; // ecx
  void *v17; // rbx
  NTSTATUS v18; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+38h] [rbp-40h]
  int v24; // [rsp+38h] [rbp-40h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[3]; // [rsp+54h] [rbp-24h] BYREF

  v11 = IoSetThreadHardErrorMode(0);
  v12 = a7;
  inited = CmpInitHiveFromFile(Source, a5, a7, v21, v23, a8, a9);
  v14 = inited;
  if ( !v12 )
  {
    if ( inited == -1073741790
      || (v15 = inited + 1073741724, v15 <= 0xE) && (v16 = 17473, _bittest(&v16, v15))
      || v14 == -1073741421 )
    {
      if ( a2 && (a6 & 0x20) == 0 )
      {
        v17 = PsReferenceImpersonationTokenEx(
                (__int64)KeGetCurrentThread(),
                1,
                &a7,
                (bool *)&a6,
                (int *)ImpersonationLevel,
                0LL);
        v14 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
        if ( v14 >= 0 )
        {
          v18 = CmpInitHiveFromFile(Source, a5, 0LL, v22, v24, a8, a9);
          CurrentThread = KeGetCurrentThread();
          v14 = v18;
          if ( v17 )
            PsImpersonateClient(CurrentThread, v17, a7, a6, ImpersonationLevel[0]);
          else
            PsImpersonateClient(CurrentThread, 0LL, 0, 0, SecurityImpersonation);
        }
        if ( v17 )
          ObfDereferenceObject(v17);
      }
    }
  }
  IoSetThreadHardErrorMode(v11);
  return (unsigned int)v14;
}
