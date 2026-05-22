/*
 * XREFs of ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180043500
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeProcessor::OnInputReport(GazeProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r15d
  int v8; // r12d
  int v9; // ecx
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+58h]

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( *(_DWORD *)a2 == 0x4000 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 5) + 32LL))(
           *((_QWORD *)this + 5),
           &v17,
           (char *)&v17 + 4);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = (int)((double)*((int *)a2 + 174) / (double)*((int *)this + 12) * (double)(int)v17);
      v8 = (int)((double)*((int *)a2 + 175) / (double)*((int *)this + 13) * (double)SHIDWORD(v17));
      v9 = v7;
      if ( v7 < 0 )
        v9 = 0;
      if ( (int)v17 < v9 )
        v9 = v17;
      v10 = (int)((double)*((int *)a2 + 175) / (double)*((int *)this + 13) * (double)SHIDWORD(v17));
      if ( v8 < 0 )
        v10 = 0;
      if ( SHIDWORD(v17) < v10 )
        v10 = HIDWORD(v17);
      *(_DWORD *)a2 = 2;
      *((_DWORD *)a2 + 17) = v9;
      *((_DWORD *)a2 + 18) = v10;
      *((_DWORD *)a2 + 12) = 1;
      *((_BYTE *)a2 + 2772) = 1;
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      (*(void (__fastcall **)(__int64, _QWORD, struct InputInfo *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL))(
        v11,
        *((_QWORD *)this + 5),
        a2,
        0LL,
        0LL,
        &v16);
      *(_DWORD *)a2 = 0x4000;
      *((_DWORD *)a2 + 174) = v7;
      *((_DWORD *)a2 + 175) = v8;
      if ( v16 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
        (*(void (__fastcall **)(__int64, struct InputInfo *, __int64))(*(_QWORD *)v13 + 72LL))(v13, a2, v16);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 146, v5);
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 142, 87);
  }
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v4;
}
