/*
 * XREFs of ACPIQueryCacheCoherencyAttribute @ 0x1C0078CF4
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0076550 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIInternalSetFlags @ 0x1C002A604 (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall ACPIQueryCacheCoherencyAttribute(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  signed __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rax
  _BYTE v7[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v8; // [rsp+32h] [rbp-36h]
  char v9; // [rsp+40h] [rbp-28h]

  if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) != 0 )
    return 0;
  v4 = ACPIInternalSetFlags((void *)(BugCheckParameter2 + 952), 0x1000000uLL);
  if ( (v4 & v5) != 0 )
    return 0;
  v6 = AMLIGetNamedChild(*(_QWORD **)(BugCheckParameter2 + 712), 1094927199);
  if ( !v6 )
  {
    *(_DWORD *)(BugCheckParameter2 + 892) = 1;
    return 0;
  }
  v2 = AMLIEvalNameSpaceObject(v6, v7, 0, 0LL);
  if ( v2 >= 0 )
  {
    if ( v8 != 1 )
      KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 712), v8);
    if ( (v9 & 1) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 892) = 2;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 892) = 3;
      KeReportCacheIncoherentDevice();
    }
    AMLIFreeDataBuffs((__int64)v7);
  }
  return (unsigned int)v2;
}
