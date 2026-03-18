/*
 * XREFs of ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0016AF0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

bool __fastcall CMouseProcessor::CMouseQueue::Dequeue(
        CMouseProcessor::CMouseQueue *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  __int16 v2; // r8
  bool v4; // di
  _OWORD *v5; // rcx

  v2 = *((_WORD *)this + 1153);
  v4 = v2 != 0;
  if ( v2 )
  {
    v5 = (_OWORD *)((char *)this + 144 * (((unsigned __int8)*((_WORD *)this + 1152) - (unsigned __int8)v2 + 1) & 0xF));
    *(_OWORD *)a2 = *v5;
    *((_OWORD *)a2 + 1) = v5[1];
    *((_OWORD *)a2 + 2) = v5[2];
    *((_OWORD *)a2 + 3) = v5[3];
    *((_OWORD *)a2 + 4) = v5[4];
    *((_OWORD *)a2 + 5) = v5[5];
    *((_OWORD *)a2 + 6) = v5[6];
    *((_OWORD *)a2 + 7) = v5[7];
    *((_OWORD *)a2 + 8) = v5[8];
    memset(v5, 0, 0x90uLL);
    --*((_WORD *)this + 1153);
  }
  return v4;
}
