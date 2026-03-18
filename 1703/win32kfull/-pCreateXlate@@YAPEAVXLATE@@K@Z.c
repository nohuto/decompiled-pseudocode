/*
 * XREFs of ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C029B960
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00AC7FC (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C029B3AC (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

struct XLATE *__fastcall pCreateXlate(int a1)
{
  struct XLATE *result; // rax

  result = (struct XLATE *)AllocThreadBufferWithTag((unsigned int)(4 * a1 + 88), 1953265735LL, 0LL);
  if ( result )
  {
    *(_DWORD *)result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
    if ( a1 )
    {
      *((_DWORD *)result + 1) = 2;
      *((_QWORD *)result + 2) = (char *)result + 80;
      *((_DWORD *)result + 19) = 0;
    }
    else
    {
      *((_DWORD *)result + 1) = 0;
      *((_QWORD *)result + 2) = 0LL;
      *((_DWORD *)result + 19) = 512;
    }
    *((_DWORD *)result + 9) = -1;
    *((_DWORD *)result + 2) = 0;
    *((_DWORD *)result + 3) = a1;
    *((_QWORD *)result + 5) = 0LL;
    *((_QWORD *)result + 6) = 0LL;
    *((_QWORD *)result + 7) = 0LL;
  }
  return result;
}
