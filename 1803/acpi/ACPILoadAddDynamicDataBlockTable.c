/*
 * XREFs of ACPILoadAddDynamicDataBlockTable @ 0x1C009A594
 * Callers:
 *     ACPILoadProcessDSDT @ 0x1C009A65C (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1C009A99C (ACPILoadProcessRSDT.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPILoadAddDynamicDataBlockTable(__int64 a1, char a2)
{
  unsigned int v4; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rcx

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x74706341u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v6[3] = a1;
    if ( a2 )
    {
      v7 = AcpiDynamicDataBlockTableList;
      if ( *(__int64 **)(AcpiDynamicDataBlockTableList + 8) != &AcpiDynamicDataBlockTableList )
        __fastfail(3u);
      *v6 = AcpiDynamicDataBlockTableList;
      v6[1] = &AcpiDynamicDataBlockTableList;
      *(_QWORD *)(v7 + 8) = v6;
      AcpiDynamicDataBlockTableList = (__int64)v6;
    }
    else
    {
      v8 = (_QWORD *)qword_1C0067908;
      if ( *(__int64 **)qword_1C0067908 != &AcpiDynamicDataBlockTableList )
        __fastfail(3u);
      *v6 = &AcpiDynamicDataBlockTableList;
      v6[1] = v8;
      *v8 = v6;
      qword_1C0067908 = (__int64)v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
