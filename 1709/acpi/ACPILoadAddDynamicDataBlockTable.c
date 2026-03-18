/*
 * XREFs of ACPILoadAddDynamicDataBlockTable @ 0x1C00AE894
 * Callers:
 *     ACPILoadProcessDSDT @ 0x1C00AE720 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1C00AEB50 (ACPILoadProcessRSDT.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPILoadAddDynamicDataBlockTable(__int64 a1, char a2)
{
  unsigned int v4; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // rcx

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x74706341u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v6[3] = a1;
    if ( a2 )
    {
      v9 = AcpiDynamicDataBlockTableList;
      if ( *(__int64 **)(AcpiDynamicDataBlockTableList + 8) != &AcpiDynamicDataBlockTableList )
        __fastfail(3u);
      *v6 = AcpiDynamicDataBlockTableList;
      v6[1] = &AcpiDynamicDataBlockTableList;
      *(_QWORD *)(v9 + 8) = v6;
      AcpiDynamicDataBlockTableList = (__int64)v6;
    }
    else
    {
      v7 = (_QWORD *)qword_1C0079F70;
      if ( *(__int64 **)qword_1C0079F70 != &AcpiDynamicDataBlockTableList )
        __fastfail(3u);
      *v6 = &AcpiDynamicDataBlockTableList;
      v6[1] = v7;
      *v7 = v6;
      qword_1C0079F70 = (__int64)v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
