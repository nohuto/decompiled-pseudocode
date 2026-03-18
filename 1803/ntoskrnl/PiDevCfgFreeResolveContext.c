/*
 * XREFs of PiDevCfgFreeResolveContext @ 0x1405DA940
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1405DA7CC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x1405DADC4 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1405DC2E8 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 */

void __fastcall PiDevCfgFreeResolveContext(__int64 a1)
{
  void *v2; // rcx
  unsigned int i; // edi
  char *v4; // rcx
  void **v5; // rdx
  void *v6; // rbx
  void **v7; // rax
  void *v8; // rcx
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r8

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < 0x7F; ++i )
    {
      while ( 1 )
      {
        v4 = *(char **)(a1 + 24);
        v5 = (void **)&v4[16 * i];
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( *((void ***)v6 + 1) != v5 || (v7 = *(void ***)v6, *(void **)(*(_QWORD *)v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v7;
        v7[1] = v5;
        RtlFreeAnsiString((PUNICODE_STRING)v6 + 1);
        v8 = (void *)*((_QWORD *)v6 + 5);
        if ( v8 )
        {
          v9 = *((_DWORD *)v6 + 8);
          if ( (_WORD)v9 == 0x8000 )
          {
            if ( (v9 & 0x100000) != 0 )
            {
              if ( *(_QWORD *)&PiPnpRtlCtx && (v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
                v11 = *(_QWORD *)(v10 + 8);
              else
                v11 = 0LL;
              RegRtlDeleteTreeInternal(v8, 0LL, v11, 0LL);
            }
            ZwClose(*((HANDLE *)v6 + 5));
          }
          else
          {
            ExFreePoolWithTag(v8, 0);
          }
        }
        ExFreePoolWithTag(v6, 0);
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
