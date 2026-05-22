/*
 * XREFs of ?ComputeSuperimposedDisplayPixelsFromTouchpadHimetricValues@PTPProcessor@@AEAAXPEAUInputInfo@@_N@Z @ 0x18006F350
 * Callers:
 *     ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18006F2A8 (-DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PTPProcessor::ComputeSuperimposedDisplayPixelsFromTouchpadHimetricValues(
        PTPProcessor *this,
        struct InputInfo *a2,
        char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r14
  int v9; // r9d
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  bool v15; // sf
  int v16; // r8d
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF
  int nNumerator; // [rsp+80h] [rbp+18h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)this + 6) + 32LL))(
         *((_QWORD *)this + 6),
         &nNumerator,
         &v17) < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 11, 760, 5);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (*(int (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)this + 6) + 40LL))(*((_QWORD *)this + 6), &v18, &v20) < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 11, 765, 5);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( a3 )
  {
    *((_DWORD *)this + 157) = *((_DWORD *)a2 + 17);
    *((_DWORD *)this + 158) = *((_DWORD *)a2 + 18);
  }
  v8 = 0LL;
  if ( *((_DWORD *)a2 + 12) )
  {
    v9 = nNumerator;
    do
    {
      v10 = *((_DWORD *)a2 + 12 * v8 + 18) - *((_DWORD *)this + 158);
      v11 = MulDiv(*((_DWORD *)a2 + 12 * v8 + 17) - *((_DWORD *)this + 157), v9, 100 * v18);
      v12 = MulDiv(v10, v17, 100 * v20);
      v13 = *((_DWORD *)this + 54);
      v14 = v12 + *((_DWORD *)this + 55);
      v15 = v11 + v13 < 0;
      v16 = v11 + v13;
      v9 = nNumerator;
      if ( v15 )
      {
        *((_DWORD *)a2 + 12 * v8 + 17) = 0;
      }
      else if ( v16 < nNumerator )
      {
        *((_DWORD *)a2 + 12 * v8 + 17) = v16;
      }
      else
      {
        *((_DWORD *)a2 + 12 * v8 + 17) = nNumerator - 1;
      }
      if ( v14 >= 0 )
      {
        if ( v14 < v17 )
          *((_DWORD *)a2 + 12 * v8 + 18) = v14;
        else
          *((_DWORD *)a2 + 12 * v8 + 18) = v17 - 1;
      }
      else
      {
        *((_DWORD *)a2 + 12 * v8 + 18) = 0;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *((_DWORD *)a2 + 12) );
  }
}
