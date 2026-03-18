/*
 * XREFs of ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x1801242C4
 * Callers:
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x180123FAC (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 * Callees:
 *     ??$_Move@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x180123F70 (--$_Move@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CProcessAttri.c)
 *     _lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator() @ 0x180124028 (_lambda_25a6e35ac28882ed86e8364a912a7bf9_--operator().c)
 */

void __fastcall CProcessAttributionManager::NotifyOnDeadObserver(
        CProcessAttributionManager *this,
        struct CProcessAttributionObserver *a2)
{
  struct CProcessAttributionObserver **v2; // rdi
  struct CProcessAttributionObserver **v4; // rdx
  CProcessAttributionManager *v5; // rsi
  struct CProcessAttributionObserver **v6; // rax
  CProcessAttributionManager *v7; // r8
  struct CProcessAttributionObserver **v8; // rax
  size_t v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // rbx
  __int64 *i; // rdi
  __int64 *v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // rbp
  __int64 v17; // rax

  v2 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 3);
  v4 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 4);
  v5 = this;
  while ( v2 != v4 && *v2 != a2 )
    ++v2;
  if ( v2 != v4 )
  {
    v6 = v2 + 1;
    v7 = 0LL;
    this = (CProcessAttributionManager *)((unsigned __int64)((char *)v4 - (char *)(v2 + 1) + 7) >> 3);
    if ( v2 + 1 > v4 )
      this = 0LL;
    if ( this )
    {
      do
      {
        if ( *v6 != a2 )
          *v2++ = *v6;
        ++v6;
        v7 = (CProcessAttributionManager *)((char *)v7 + 1);
      }
      while ( v7 != this );
    }
  }
  v8 = (struct CProcessAttributionObserver **)*((_QWORD *)v5 + 3);
  if ( v2 != v8 || v4 != *((struct CProcessAttributionObserver ***)v5 + 4) )
  {
    if ( v2 == v4 )
      goto LABEL_17;
    v9 = (*((_QWORD *)v5 + 4) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL;
    memmove(v2, v4, v9);
    v8 = (struct CProcessAttributionObserver **)((char *)v2 + v9);
  }
  *((_QWORD *)v5 + 4) = v8;
LABEL_17:
  v10 = *(__int64 **)v5;
  v11 = (__int64 *)*((_QWORD *)v5 + 1);
  while ( v10 != v11 )
  {
    this = (CProcessAttributionManager *)*v10;
    --*(_DWORD *)(*v10++ + 124);
  }
  v12 = (__int64 *)*((_QWORD *)v5 + 1);
  for ( i = *(__int64 **)v5; i != v12 && !lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator()((__int64)this, *i); ++i )
    ;
  if ( i != v12 )
  {
    v14 = i + 1;
    v15 = 0LL;
    v16 = (unsigned __int64)((char *)v12 - (char *)(i + 1) + 7) >> 3;
    if ( i + 1 > v12 )
      v16 = 0LL;
    if ( v16 )
    {
      do
      {
        if ( !lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator()((__int64)this, *v14) )
          *i++ = *v14;
        ++v14;
        ++v15;
      }
      while ( v15 != v16 );
    }
  }
  v17 = *(_QWORD *)v5;
  if ( i != *(__int64 **)v5 || v12 != *((__int64 **)v5 + 1) )
  {
    if ( i == v12 )
      return;
    v17 = std::_Move<CProcessAttributionManager::Record * *,CProcessAttributionManager::Record * *>(
            v12,
            *((_QWORD *)v5 + 1),
            i);
  }
  *((_QWORD *)v5 + 1) = v17;
}
