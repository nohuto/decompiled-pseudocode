/*
 * XREFs of ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x180036480
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::InjectManipulationInput(
        ControllerProcessor *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  DWORD TickCount; // ebx
  int *v7; // rcx
  __int64 v8; // r8
  int *v9; // rdx
  int v10; // eax
  __int64 v12; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v15; // [rsp+40h] [rbp-C0h]
  int v16; // [rsp+48h] [rbp-B8h]
  int v17; // [rsp+60h] [rbp-A0h]
  char v18; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v19; // [rsp+218h] [rbp+118h]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v14, 0, 0x6C8uLL);
  v15 = PerformanceCount;
  v19 = *((_QWORD *)this + 234);
  v16 = 1736;
  v14[0] = 8;
  v14[2] = TickCount;
  if ( a2 )
  {
    v7 = (int *)&v18;
    v8 = a2;
    v9 = (int *)((char *)a3 + 32);
    do
    {
      *(v7 - 1) = *(v9 - 7);
      v7[1] = *v9;
      v7[2] = v9[1];
      v10 = 0;
      *v7 = 0;
      if ( (*(_BYTE *)(v9 - 5) & 2) != 0 )
      {
        v10 = 1;
        *v7 = 1;
      }
      if ( (*(v9 - 5) & 0x30000) != 0 )
        *v7 = v10 | 2;
      ++v17;
      v9 += 36;
      v7 += 8;
      --v8;
    }
    while ( v8 );
  }
  if ( !*((_BYTE *)this + 6832) )
    return 2147549183LL;
  v12 = *((_QWORD *)this + 730);
  v14[1] = *((_DWORD *)this + 1462);
  return (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 24LL))(v12, v14);
}
