/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x1406EE62C
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 */

void __fastcall CmpPublishEventForPcaResolver(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v3; // rdx
  unsigned __int16 v4; // ax
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int16 v9; // [rsp+30h] [rbp-39h] BYREF
  __int16 v10; // [rsp+34h] [rbp-35h] BYREF
  unsigned __int16 *v11; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v12[48]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  __int16 *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  __int64 v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  memset(v12, 0, sizeof(v12));
  if ( EtwAppCompatProvRegHandle && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED) )
  {
    CmpAttachToRegistryProcess((__int64)v12);
    v11 = 0LL;
    CmpConstructNameWithStatus(a1, &v11);
    v2 = v11;
    if ( v11 )
    {
      v3 = (unsigned __int16 *)PsGetCurrentThreadProcess()[1].ActiveProcessors.Bitmap[15];
      v9 = *v3 >> 1;
      v4 = *v2;
      UserData.Reserved = 0;
      v10 = v4 >> 1;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 2;
      v5 = *v3;
      v6 = *((_QWORD *)v3 + 1);
      v16 = 0;
      v19 = 0;
      v14 = v6;
      v17 = &v10;
      v15 = v5;
      v18 = 2;
      v7 = *((_QWORD *)v2 + 1);
      v8 = *v2;
      v22 = 0;
      v20 = v7;
      v21 = v8;
      EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
    }
    KiUnstackDetachProcess((__int64)v12, 0LL);
    if ( v2 )
      CmpFreeTransientPoolWithTag(v2, 0x624E4D43u);
  }
}
