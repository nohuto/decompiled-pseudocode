/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x14057CDD4
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 */

void __fastcall CmpPublishEventForPcaResolver(__int64 a1)
{
  PVOID v2; // rbx
  unsigned __int16 *v3; // rdx
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  int v8; // r8d
  __int16 v9; // [rsp+30h] [rbp-19h] BYREF
  __int16 v10; // [rsp+34h] [rbp-15h] BYREF
  PVOID P; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v13; // [rsp+50h] [rbp+7h]
  int v14; // [rsp+58h] [rbp+Fh]
  int v15; // [rsp+5Ch] [rbp+13h]
  __int16 *v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  __int64 v19; // [rsp+70h] [rbp+27h]
  int v20; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]

  if ( EtwAppCompatProvRegHandle && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED) )
  {
    P = 0LL;
    CmpConstructNameWithStatus(a1, &P);
    if ( P )
    {
      v2 = P;
      v3 = (unsigned __int16 *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
      v9 = *v3 >> 1;
      v4 = *(_WORD *)P;
      UserData.Reserved = 0;
      v10 = v4 >> 1;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 2;
      v5 = *((_QWORD *)v3 + 1);
      v6 = *v3;
      v15 = 0;
      v18 = 0;
      v13 = v5;
      v16 = &v10;
      v14 = v6;
      v17 = 2;
      v7 = *((_QWORD *)P + 1);
      v8 = *(unsigned __int16 *)P;
      v21 = 0;
      v19 = v7;
      v20 = v8;
      EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
      CmpFreeTransientPoolWithTag(v2, 0x624E4D43u);
    }
  }
}
