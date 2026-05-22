/*
 * XREFs of ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x180041E00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::InjectManipulationInput(
        ControllerProcessor *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  DWORD TickCount; // ebx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  int *v9; // rcx
  __int64 v10; // r9
  int *v11; // rdx
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[356]; // [rsp+38h] [rbp-C8h] BYREF

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset(v21, 0, sizeof(v21));
  v7 = *((_DWORD *)this + 294);
  v8 = *((_DWORD *)this + 295);
  v21[2] = PerformanceCount.QuadPart;
  v21[83] = *((_QWORD *)this + 30);
  v21[0] = __PAIR64__(v7, v8);
  LODWORD(v21[1]) = TickCount;
  LODWORD(v21[5]) = 2848;
  if ( a2 )
  {
    v9 = (int *)&v21[7] + 1;
    v10 = a2;
    v11 = (int *)((char *)a3 + 32);
    do
    {
      *v9 = 0;
      v12 = *(v11 - 5);
      *(v9 - 1) = *(v11 - 7);
      v13 = v12 & 2;
      v9[2] = *v11;
      v9[3] = v11[1];
      v14 = *v9;
      if ( v13 )
        v14 = 1;
      v15 = (*(v11 - 5) & 0x30000) == 0;
      *v9 = v14;
      if ( !v15 )
        *v9 = (v13 != 0) + 2;
      ++LODWORD(v21[6]);
      v11 += 36;
      v9 += 12;
      --v10;
    }
    while ( v10 );
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this - 4) + 24LL))(*((_QWORD *)this - 4), v21);
  v18 = v16;
  if ( v16 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 12, 3009, v16);
  return v18;
}
