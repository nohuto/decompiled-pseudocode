/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C00E6C30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     SynthesizeMouseInputData @ 0x1C012E420 (SynthesizeMouseInputData.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  unsigned int v5; // r15d
  __int64 v7; // rbx
  CInputThread *v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+28h] [rbp-80h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int128 v18; // [rsp+68h] [rbp-40h]
  __int128 v19; // [rsp+78h] [rbp-30h]
  __int64 v20; // [rsp+88h] [rbp-20h]
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  v4 = (__int64 *)a3;
  v5 = a2;
  LODWORD(v7) = 0;
  v15 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v21, a2, a3, a4);
  v9 = 0;
  if ( CInputThread::IsInputThread(v8) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v18 = *(_OWORD *)a1;
    v19 = *(_OWORD *)(a1 + 16);
    v20 = *(_QWORD *)(a1 + 32);
    v16[0] = v18;
    v16[1] = v19;
    v17 = v20;
    if ( v4 )
    {
      if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
        v4 = (__int64 *)MmUserProbeAddress;
      v7 = *v4;
      v15 = *v4;
    }
    v9 = SynthesizeMouseInputData(v16, v5, (unsigned __int64)&v15 & -(__int64)((_DWORD)v7 != 0));
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v9;
}
