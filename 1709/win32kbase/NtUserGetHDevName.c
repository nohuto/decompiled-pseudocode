/*
 * XREFs of NtUserGetHDevName @ 0x1C005AF10
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C005ABE4 (HMValidateSharedHandle.c)
 *     DrvGetHdevName @ 0x1C005B000 (DrvGetHdevName.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetHDevName(int a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rax
  _BYTE *v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[32]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+70h] [rbp-28h]

  v4 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v11);
  v5 = HMValidateSharedHandle(a1);
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 240);
    if ( v7 )
    {
      if ( (unsigned int)DrvGetHdevName(v7, v12) )
      {
        HIWORD(v13) = 0;
        v4 = 1;
        if ( (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v7 = MmUserProbeAddress;
        v6 = (_BYTE *)a2;
        if ( a2 >= MmUserProbeAddress )
          v6 = (_BYTE *)MmUserProbeAddress;
        *v6 = *v6;
        v6[63] = v6[63];
        *(_OWORD *)a2 = v12[0];
        *(_OWORD *)(a2 + 16) = v12[1];
        *(_OWORD *)(a2 + 32) = v12[2];
        *(_OWORD *)(a2 + 48) = v13;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v7, (__int64)v6, v8, v9);
  return v4;
}
