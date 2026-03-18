/*
 * XREFs of GetScaledLogFontForDpi @ 0x1C007810C
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0076268 (GetWindowNCMetrics.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00763A4 (GetWindowNCMetricsForDpi.c)
 *     _SystemParametersInfoForDpi @ 0x1C01020D0 (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C007DAFC (GetDPIMETRICSForDpiUnsafe.c)
 *     DeleteMetricsFont @ 0x1C00825A0 (DeleteMetricsFont.c)
 *     GetDPIServerInfoForDpi @ 0x1C00825C8 (GetDPIServerInfoForDpi.c)
 *     CreateScaledFont @ 0x1C01A1438 (CreateScaledFont.c)
 */

_BOOL8 __fastcall GetScaledLogFontForDpi(unsigned int a1, unsigned int a2, __int64 a3)
{
  HBRUSH *DPIMETRICSForDpiUnsafe; // rax
  BOOL v7; // esi
  int v8; // ebp
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  INT v13; // r8d
  HBRUSH v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  HBRUSH v19; // [rsp+78h] [rbp+20h] BYREF

  DPIMETRICSForDpiUnsafe = 0LL;
  v7 = 0;
  if ( a1 <= 3 )
    DPIMETRICSForDpiUnsafe = (HBRUSH *)GetDPIMETRICSForDpiUnsafe(a2);
  v19 = 0LL;
  v8 = 0;
  if ( !a1 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[8];
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(Get96DpiMetrics() + 64);
    goto LABEL_30;
  }
  v9 = a1 - 1;
  if ( !v9 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[4];
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(Get96DpiMetrics() + 32);
    goto LABEL_30;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = *DPIMETRICSForDpiUnsafe;
      goto LABEL_13;
    }
    v16 = *(_QWORD *)Get96DpiMetrics();
    goto LABEL_30;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[7];
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(Get96DpiMetrics() + 56);
LABEL_30:
    v18 = CreateScaledFont(v16, &v19, v17, a2, 0LL, 0LL, 0LL);
    v14 = v19;
    v8 = v18;
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      *(_OWORD *)a3 = *(_OWORD *)(gpsi + 5000LL);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(gpsi + 5016LL);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(gpsi + 5032LL);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(gpsi + 5048LL);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(gpsi + 5064LL);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(gpsi + 5080LL);
      *(_DWORD *)(a3 + 88) = *(_DWORD *)(gpsi + 5088LL);
      v13 = *(unsigned __int16 *)(gpsi + 9974LL);
      if ( a2 != v13 )
      {
        *(_DWORD *)(a3 + 4) = EngMulDiv(*(_DWORD *)(a3 + 4), a2, v13);
        *(_DWORD *)a3 = EngMulDiv(*(_DWORD *)a3, a2, *(unsigned __int16 *)(gpsi + 9974LL));
      }
      return 1;
    }
    return v7;
  }
  v14 = *(HBRUSH *)(GetDPIServerInfoForDpi(a2) + 8);
LABEL_13:
  if ( v14 )
    v7 = GreExtGetObjectW(v14, 92LL, (char *)a3) != 0;
  if ( v8 )
    DeleteMetricsFont(v14);
  return v7;
}
