/*
 * XREFs of ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00179D4
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::CMouseRawInput::Initialize(
        CMouseProcessor::CMouseRawInput *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  int v3; // ecx
  unsigned __int64 v4; // [rsp+0h] [rbp-18h]

  *((_BYTE *)this + 52) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 3) = 0LL;
  LODWORD(v4) = 0;
  *((_OWORD *)this + 2) = v4;
  v3 = *(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x10;
  *((_BYTE *)this + 53) = v3 != 0;
  if ( !v3 )
  {
    *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    *((_OWORD *)this + 2) = *(_OWORD *)*(_QWORD *)a2;
    *((_DWORD *)this + 3) = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
    *((_DWORD *)this + 4) = *(_DWORD *)(*(_QWORD *)a2 + 44LL);
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 5) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
    *((_WORD *)this + 2) = *(_WORD *)(*(_QWORD *)a2 + 16LL);
    *((_WORD *)this + 3) = *(_WORD *)(*(_QWORD *)a2 + 18LL);
    *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)a2 + 20LL);
    *(_WORD *)this = *((_WORD *)this + 27) & *(_WORD *)(*(_QWORD *)a2 + 24LL);
    if ( *((_DWORD *)this + 8) )
      *((_DWORD *)this + 12) |= 1u;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x20) != 0 )
      *((_DWORD *)this + 12) |= 2u;
  }
}
