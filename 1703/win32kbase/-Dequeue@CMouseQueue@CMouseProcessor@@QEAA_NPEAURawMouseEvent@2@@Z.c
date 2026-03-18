/*
 * XREFs of ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0081E0C
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00477DC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

char __fastcall CMouseProcessor::CMouseQueue::Dequeue(
        CMouseProcessor::CMouseQueue *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  __int16 v3; // cx
  char v4; // bl
  char *v5; // rcx

  v3 = *((_WORD *)this + 1089);
  if ( !v3 )
    return 0;
  v4 = 1;
  v5 = (char *)this + 136 * (((unsigned __int8)*((_WORD *)this + 1088) - (unsigned __int8)v3 + 1) & 0xF);
  *(_OWORD *)a2 = *(_OWORD *)v5;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v5 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)v5 + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)v5 + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)v5 + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)v5 + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)v5 + 6);
  *((_OWORD *)a2 + 7) = *((_OWORD *)v5 + 7);
  *((_QWORD *)a2 + 16) = *((_QWORD *)v5 + 16);
  memset(v5, 0, 0x88uLL);
  --*((_WORD *)this + 1089);
  return v4;
}
