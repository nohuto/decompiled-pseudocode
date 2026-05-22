/*
 * XREFs of ?PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z @ 0x18006BB70
 * Callers:
 *     <none>
 * Callees:
 *     ?FillPointerInfo@LegacyInjectionRawInputProvider@@AEAAXPEAUtagPOINTER_INFO@@AEBUTouchContact@@HAEAUtagLegacyISMPOSTINPUTINFO@@@Z @ 0x18006BD38 (-FillPointerInfo@LegacyInjectionRawInputProvider@@AEAAXPEAUtagPOINTER_INFO@@AEBUTouchContact@@HA.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::PutTouchEvent(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // esi
  unsigned int v5; // edx
  __int64 v6; // r14
  __int16 v7; // r15
  int v8; // r11d
  int v9; // eax
  int v10; // eax
  struct tagLegacyISMPOSTINPUTINFO *v12; // [rsp+28h] [rbp-E0h]
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh]
  LARGE_INTEGER v16; // [rsp+50h] [rbp-B8h]
  _OWORD v17[60]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = 0;
  if ( *(_BYTE *)(a2 + 23) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(&v14, 0, 0x3D8uLL);
    v4 = 0;
    v15 = *(_DWORD *)(a2 + 4);
    v16 = PerformanceCount;
    if ( *(_BYTE *)(a2 + 23) )
    {
      v5 = v14;
      while ( 1 )
      {
        v6 = a2 + 56LL * v4;
        v7 = *(_WORD *)(v6 + 26);
        if ( v7 == 5 )
          *(_WORD *)(v6 + 26) = 9;
        LegacyInjectionRawInputProvider::FillPointerInfo(
          (LegacyInjectionRawInputProvider *)(96LL * v5),
          (struct tagPOINTER_INFO *)&v17[6 * v5],
          (const struct TouchContact *)(v6 + 24),
          v5 == 0,
          v12);
        v5 = ++v14;
        if ( v8 )
        {
          v9 = MITInjectLegacyISMTouchFrame(&v14);
          v2 = v9 | 0x10000000;
          if ( v9 < 0 )
          {
            v5 = v14;
          }
          else
          {
            memset_0(&v14, 0, 0x3D8uLL);
            v15 = *(_DWORD *)(a2 + 4);
            v16 = PerformanceCount;
            *(_WORD *)(v6 + 26) = 4;
            LegacyInjectionRawInputProvider::FillPointerInfo(
              (LegacyInjectionRawInputProvider *)(96LL * v14),
              (struct tagPOINTER_INFO *)&v17[6 * v14],
              (const struct TouchContact *)(v6 + 24),
              v14 == 0,
              v12);
            v5 = ++v14;
          }
          *(_WORD *)(v6 + 26) = v7;
          if ( v2 < 0 )
            break;
        }
        if ( ++v4 >= *(unsigned __int8 *)(a2 + 23) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v10 = MITInjectLegacyISMTouchFrame(&v14);
      v2 = v10 | 0x10000000;
      if ( v10 >= 0 )
        return (unsigned int)v2;
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)v2;
}
