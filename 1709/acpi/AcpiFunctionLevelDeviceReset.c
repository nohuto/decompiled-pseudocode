/*
 * XREFs of AcpiFunctionLevelDeviceReset @ 0x1C00A0C44
 * Callers:
 *     AcpiDeviceReset @ 0x1C00A0BA0 (AcpiDeviceReset.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     AcpiFunctionLevelDeviceResetComplete @ 0x1C00A0D20 (AcpiFunctionLevelDeviceResetComplete.c)
 */

__int64 __fastcall AcpiFunctionLevelDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  unsigned int v6; // ebx
  _QWORD *PoolWithTag; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  if ( !*(_QWORD *)(v3 + 720) )
  {
    v6 = -1073741810;
LABEL_12:
    AcpiFunctionLevelDeviceResetComplete(0LL, 0LL, 0LL, v4);
    return v6;
  }
  if ( !*(_QWORD *)(v3 + 448) )
  {
    v6 = -1073741637;
    goto LABEL_12;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a3 < 0x18u )
    {
      v6 = -1073741811;
      goto LABEL_12;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x51706341u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_12;
    }
    *(_OWORD *)PoolWithTag = *(_OWORD *)a3;
    PoolWithTag[2] = *(_QWORD *)(a3 + 16);
  }
  v6 = AMLIAsyncEvalObject(*(__int64 **)(v3 + 448), 0LL, 0, 0LL, AcpiFunctionLevelDeviceResetComplete, v4);
  if ( v6 != 259 )
    goto LABEL_12;
  return v6;
}
