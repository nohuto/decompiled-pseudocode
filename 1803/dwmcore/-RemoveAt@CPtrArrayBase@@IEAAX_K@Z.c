/*
 * XREFs of ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800B98BC
 * Callers:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BEDE4 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::RemoveAt(CPtrArrayBase *this, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rbx

  v3 = (unsigned __int64 *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (*(_QWORD *)this & 2) != 0 )
    v4 = *v3;
  else
    v4 = *(_QWORD *)this & 1LL;
  if ( a2 < v4 )
  {
    if ( v4 == 1 )
    {
      *(_QWORD *)this = 0LL;
    }
    else
    {
      v5 = v4 - 1;
      v6 = v3 + 2;
      if ( v5 == 1 )
      {
        v7 = v6[-a2 + 1];
        operator delete(v3);
        *(_QWORD *)this = v7 | 1;
      }
      else
      {
        if ( a2 < v5 )
          memmove(&v6[a2], &v6[a2 + 1], 8 * (v5 - a2));
        *v3 = v5;
      }
    }
  }
}
