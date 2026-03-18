/*
 * XREFs of GetScaledLogFontForDpi @ 0x1C00454B4
 * Callers:
 *     GetWindowNCMetricsForDpi @ 0x1C0044D04 (GetWindowNCMetricsForDpi.c)
 *     _SystemParametersInfoForDpi @ 0x1C00F6100 (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C0044284 (GetDPIMETRICSForDpiUnsafe.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     GetDPIServerInfoForDpiUnsafe @ 0x1C010352C (GetDPIServerInfoForDpiUnsafe.c)
 *     CreateScaledFont @ 0x1C01C3F3C (CreateScaledFont.c)
 *     DeleteMetricsFont @ 0x1C01C3FF4 (DeleteMetricsFont.c)
 */

__int64 __fastcall GetScaledLogFontForDpi(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagDpiKMMetricsCacheNode *DPIMETRICSForDpiUnsafe; // rdi
  __int64 DPIServerInfoForDpiUnsafe; // rsi
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  int v9; // r15d
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // [rsp+68h] [rbp+48h] BYREF

  DPIMETRICSForDpiUnsafe = 0LL;
  DPIServerInfoForDpiUnsafe = 0LL;
  v6 = 0;
  v7 = a2;
  if ( a1 >= 0 )
  {
    if ( a1 > 3 )
    {
      if ( a1 <= 5 )
        DPIServerInfoForDpiUnsafe = GetDPIServerInfoForDpiUnsafe((unsigned int)a2);
    }
    else
    {
      DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe((unsigned int)a2, a2, a3, a4);
    }
  }
  v19 = 0LL;
  v9 = 0;
  if ( a1 )
  {
    v10 = a1 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              return v6;
            if ( DPIServerInfoForDpiUnsafe )
            {
              v14 = *(_QWORD *)(DPIServerInfoForDpiUnsafe + 24);
              goto LABEL_16;
            }
            v16 = *(_QWORD *)(Get96DpiServerInfo() + 24);
          }
          else
          {
            if ( DPIServerInfoForDpiUnsafe )
            {
              v14 = *(_QWORD *)(DPIServerInfoForDpiUnsafe + 8);
              goto LABEL_16;
            }
            v16 = *(_QWORD *)(Get96DpiServerInfo() + 8);
          }
        }
        else
        {
          if ( DPIMETRICSForDpiUnsafe )
          {
            v14 = *((_QWORD *)DPIMETRICSForDpiUnsafe + 7);
            goto LABEL_16;
          }
          v16 = *(_QWORD *)(Get96DpiMetrics() + 56);
        }
      }
      else
      {
        if ( DPIMETRICSForDpiUnsafe )
        {
          v14 = *(_QWORD *)DPIMETRICSForDpiUnsafe;
          goto LABEL_16;
        }
        v16 = *(_QWORD *)Get96DpiMetrics();
      }
    }
    else
    {
      if ( DPIMETRICSForDpiUnsafe )
      {
        v14 = *((_QWORD *)DPIMETRICSForDpiUnsafe + 4);
        goto LABEL_16;
      }
      v16 = *(_QWORD *)(Get96DpiMetrics() + 32);
    }
  }
  else
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = *((_QWORD *)DPIMETRICSForDpiUnsafe + 8);
      goto LABEL_16;
    }
    v16 = *(_QWORD *)(Get96DpiMetrics() + 64);
  }
  v18 = CreateScaledFont(v16, &v19, v17, v7);
  v14 = v19;
  v9 = v18;
LABEL_16:
  if ( v14 && (unsigned int)GreExtGetObjectW(v14) )
    v6 = 1;
  if ( v9 )
    DeleteMetricsFont(v14);
  return v6;
}
