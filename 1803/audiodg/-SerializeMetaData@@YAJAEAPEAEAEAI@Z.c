/*
 * XREFs of ?SerializeMetaData@@YAJAEAPEAEAEAI@Z @ 0x140042AF8
 * Callers:
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x140042A3C (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 * Callees:
 *     memcpy_s @ 0x140033200 (memcpy_s.c)
 */

__int64 __fastcall SerializeMetaData(unsigned __int8 **a1, unsigned int *a2)
{
  __int64 v2; // r14
  unsigned int v5; // ebx
  int v6; // ecx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  v8 = 16777217;
  v5 = 0;
  if ( memcpy_s(&(*a1)[v2], (unsigned int)(4096 - v2), &v8, 4uLL) )
    return (unsigned int)-2147024774;
  *a2 += 4;
  v6 = *a2;
  if ( 4096 - *a2 < 4 )
    return (unsigned int)-2147024774;
  *a2 = v6 + 4;
  if ( (unsigned int)(4096 - (v6 + 4)) < 4 )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a2 = v6 + 8;
    *(_DWORD *)&(*a1)[v2 + 8] = v6 + 8 - v2;
  }
  return v5;
}
