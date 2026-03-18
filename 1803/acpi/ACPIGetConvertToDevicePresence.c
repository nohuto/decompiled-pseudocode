/*
 * XREFs of ACPIGetConvertToDevicePresence @ 0x1C0025C04
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x1C0026FA0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIGetProcessorStatus @ 0x1C0026AB0 (ACPIGetProcessorStatus.c)
 *     ACPIInternalUpdateDeviceStatus @ 0x1C002A620 (ACPIInternalUpdateDeviceStatus.c)
 */

__int64 __fastcall ACPIGetConvertToDevicePresence(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  __int16 v7; // r14
  int v9; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned __int16 v16; // ax
  int v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = 15;
  v18 = 15;
  v7 = a4;
  v9 = a2;
  if ( (a4 & 0x4000000) != 0 )
  {
    if ( (_DWORD)a2 != -1073741772 )
    {
      if ( (int)a2 >= 0 )
      {
        v16 = *(_WORD *)(a3 + 2);
        if ( v16 != 1 )
          KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, 0LL, v16);
        v6 = *(_DWORD *)(a3 + 16);
      }
      else
      {
        v6 = 0;
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 8);
    v12 = 0x400000000LL;
    if ( (v11 & 0x200000000000000LL) == 0 )
      v12 = 0x8000000000000LL;
    if ( (v11 & v12) == 0 )
    {
      if ( (v11 & 0x1000000000LL) != 0 )
      {
        v13 = ACPIGetProcessorStatus(BugCheckParameter2, a2, &v18);
        v6 = v18;
        if ( v13 < 0 )
          v6 = 0;
      }
      if ( v9 != -1073741772 )
      {
        if ( v9 >= 0 )
        {
          if ( *(_WORD *)(a3 + 2) != 1 )
          {
            v14 = AMLIGetNamedChild(*(_QWORD **)(BugCheckParameter2 + 712), 1096045407);
            KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, (ULONG_PTR)v14, *(unsigned __int16 *)(a3 + 2));
          }
          v6 = *(_DWORD *)(a3 + 16);
        }
        else
        {
          v6 = 0;
        }
      }
    }
    v15 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( (v15 & 1) != 0 && (v7 & 0x1000) == 0 )
      v6 &= ~1u;
    if ( (v15 & 0x40000000) != 0 )
      v6 &= ~4u;
    if ( (v15 & 0x80000000000LL) != 0 )
      v6 &= ~1u;
    ACPIInternalUpdateDeviceStatus(BugCheckParameter2, v6, 4294967294LL);
  }
  *a5 = v6;
  if ( a6 )
    *a6 = 4;
  return 0LL;
}
