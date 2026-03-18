/*
 * XREFs of ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C0222870
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C02224D0 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     sqrt_0 @ 0x1C014565F (sqrt_0.c)
 */

__int64 __fastcall UpdateIntObjUsage(__int64 a1, __int64 a2, __int16 a3, int a4, unsigned __int64 a5)
{
  unsigned int v5; // r10d
  __int64 result; // rax
  __int64 v9; // rbp
  unsigned int v10; // r8d
  unsigned int v11; // eax
  double v12; // xmm1_8
  double v13; // xmm2_8
  unsigned int v14; // eax
  double i; // xmm0_8
  double j; // xmm0_8
  int v17; // r9d
  __int64 v18; // xmm1_8
  __int64 v19; // [rsp+58h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 20);
  result = (unsigned int)(a4 - 1);
  v9 = (v5 >> 1) & 1;
  if ( (unsigned int)result <= 1 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( dword_1C0334070 )
      {
        gmsInputEndTime = a5;
        if ( a5 > gmsInputStartTime )
        {
          if ( gmsInputStartTime )
            *(&gIntObjTelemetryState + 6 * v9 + 5) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState + 6 * v9 + 5)
                                                                                           + a5
                                                                                           - gmsInputStartTime);
        }
      }
      gmsInputStartTime = a5;
      v17 = a4 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 5) += abs32(*(_DWORD *)(a2 + 24));
      }
      else
      {
        *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 4) += abs32(*(_DWORD *)(a2 + 24));
      }
    }
  }
  else
  {
    if ( !a1 )
      return result;
    if ( (a3 & 1) != 0 )
    {
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9);
    }
    v10 = 2;
    if ( (a3 & 2) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime && gmsInputStartTime )
        *(&gIntObjTelemetryState + 6 * v9 + 5) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState
                                                                                                 + 6 * v9
                                                                                                 + 5)
                                                                                       + a5
                                                                                       - gmsInputStartTime);
      gmsInputStartTime = a5;
    }
    if ( (a3 & 0x80u) != 0 )
    {
      v11 = abs32(*(_DWORD *)(a2 + 24));
      if ( (v5 & 4) != 0 )
        *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 7) += v11;
      else
        *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 1) += v11;
    }
    if ( (a3 & 0x2000) != 0 && !gIsButtonHeld )
    {
      gIsButtonHeld = 1;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 6);
    }
    if ( (v5 & 4) != 0 && (a3 & 0x1000) != 0 )
    {
      v12 = DOUBLE_1_0;
      v19 = *(_QWORD *)(a2 + 12);
      v13 = DOUBLE_1_0;
      v14 = 2;
      for ( i = (double)((int)v19 - (int)qword_1C0334064); ; i = i * i )
      {
        if ( (v14 & 1) != 0 )
          v13 = v13 * i;
        v14 >>= 1;
        if ( !v14 )
          break;
      }
      for ( j = (double)(HIDWORD(v19) - HIDWORD(qword_1C0334064)); ; j = j * j )
      {
        if ( (v10 & 1) != 0 )
          v12 = v12 * j;
        v10 >>= 1;
        if ( !v10 )
          break;
      }
      *((double *)&gIntObjTelemetryState + 6 * v9 + 4) = sqrt_0(v12 + v13)
                                                       + *((double *)&gIntObjTelemetryState + 6 * v9 + 4);
    }
    if ( (a3 & 0x100) != 0 )
    {
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 2);
      gIsButtonHeld = 0;
    }
    if ( (a3 & 0x400) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime && gmsInputStartTime )
        qword_1C03340B8 += a5 - gmsInputStartTime;
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 3);
    }
    if ( (a3 & 0x800) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime )
      {
        if ( gmsInputStartTime )
          qword_1C03340E8 += a5 - gmsInputStartTime;
      }
      gmsInputStartTime = a5;
    }
  }
  v18 = *(_QWORD *)(a2 + 16);
  result = *(unsigned int *)(a2 + 24);
  gLastInputInfo = *(_OWORD *)a2;
  dword_1C0334070 = result;
  *(__int64 *)((char *)&qword_1C0334064 + 4) = v18;
  return result;
}
