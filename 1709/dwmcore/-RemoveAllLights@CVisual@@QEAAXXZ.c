/*
 * XREFs of ?RemoveAllLights@CVisual@@QEAAXXZ @ 0x180050288
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800B2130 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B23D8 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllLights(CVisual *this)
{
  CPtrArrayBase *v1; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rax

  v1 = (CVisual *)((char *)this + 264);
  v3 = *((_QWORD *)this + 33);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  if ( (_DWORD)v3 )
  {
    v5 = 0LL;
    v6 = (unsigned int)v3;
    do
    {
      v7 = CPtrArrayBase::operator[](v1, v5);
      (*(void (__fastcall **)(__int64, CVisual *))(*(_QWORD *)v7 + 208LL))(v7, this);
      CPtrArrayBase::Remove((CPtrArrayBase *)(v7 + 24), (unsigned __int64)this);
      ++v5;
      --v6;
    }
    while ( v6 );
    CPtrArrayBase::Clear(v1);
  }
  v4 = *((_QWORD *)this + 34);
  if ( (v4 & 2) != 0 )
    v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v4) = v4 & 1;
  if ( (_DWORD)v4 )
  {
    v8 = 0LL;
    v9 = (unsigned int)v4;
    do
    {
      v10 = CPtrArrayBase::operator[]((char *)this + 272, v8);
      (*(void (__fastcall **)(__int64, CVisual *))(*(_QWORD *)v10 + 208LL))(v10, this);
      ++v8;
      --v9;
    }
    while ( v9 );
    CPtrArrayBase::Clear((CVisual *)((char *)this + 272));
  }
  if ( (_DWORD)v4 + (_DWORD)v3 )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 64LL))(this, 1LL);
}
