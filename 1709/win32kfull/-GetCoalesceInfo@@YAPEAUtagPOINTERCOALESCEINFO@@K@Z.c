/*
 * XREFs of ?GetCoalesceInfo@@YAPEAUtagPOINTERCOALESCEINFO@@K@Z @ 0x1C01A4FF8
 * Callers:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C01A40F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERCOALESCEINFO *__fastcall GetCoalesceInfo(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax

  dword_1C032B9F4 = 0;
  v3 = a1;
  if ( gPointerCoalesceInfo < a1 )
  {
    if ( qword_1C032B9F8 )
    {
      Win32FreePool(qword_1C032B9F8, a2, a3);
      gPointerCoalesceInfo = 0;
      qword_1C032B9F8 = 0LL;
    }
    if ( (_DWORD)v3 )
    {
      v4 = 16 * v3;
      if ( (unsigned __int64)(16 * v3) <= 0xFFFFFFFF )
      {
        if ( v4 )
        {
          qword_1C032B9F8 = Win32AllocPoolZInit(v4, 1885631317LL);
          gPointerCoalesceInfo = v3;
        }
      }
    }
  }
  if ( qword_1C032B9F8 )
    return (struct tagPOINTERCOALESCEINFO *)&gPointerCoalesceInfo;
  else
    return 0LL;
}
