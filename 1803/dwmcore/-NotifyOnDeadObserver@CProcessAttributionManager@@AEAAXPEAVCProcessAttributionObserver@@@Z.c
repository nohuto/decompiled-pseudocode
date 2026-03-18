/*
 * XREFs of ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x180145F34
 * Callers:
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x180145DF0 (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 * Callees:
 *     ??$_Move_unchecked@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18001F470 (--$_Move_unchecked@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CPr.c)
 *     std::_Remove_if_unchecked_CProcessAttributionManager::Record_____ptr64_____ptr64__lambda_25a6e35ac28882ed86e8364a912a7bf9___ @ 0x180145BC4 (std--_Remove_if_unchecked_CProcessAttributionManager--Record_____ptr64_____ptr64__lambda_25a6e35.c)
 */

void __fastcall CProcessAttributionManager::NotifyOnDeadObserver(
        CProcessAttributionManager *this,
        struct CProcessAttributionObserver *a2)
{
  struct CProcessAttributionObserver **v2; // rdi
  struct CProcessAttributionObserver **v4; // rdx
  __int64 v6; // rbp
  struct CProcessAttributionObserver **v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  size_t v10; // rbx
  _QWORD *v11; // rbx
  __int64 *v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax

  v2 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 3);
  v4 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 4);
  while ( v2 != v4 && *v2 != a2 )
    ++v2;
  v6 = 0LL;
  if ( v2 != v4 )
  {
    v7 = v2 + 1;
    v8 = 0LL;
    v9 = (unsigned __int64)((char *)v4 - (char *)(v2 + 1) + 7) >> 3;
    if ( v2 + 1 > v4 )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        if ( *v7 != a2 )
          *v2++ = *v7;
        ++v7;
        ++v8;
      }
      while ( v8 != v9 );
    }
    if ( v2 != v4 )
    {
      v10 = *((_QWORD *)this + 4) - (_QWORD)v4;
      memmove(v2, v4, v10);
      *((_QWORD *)this + 4) = (char *)v2 + v10;
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 1);
  v12 = *(__int64 **)this;
  v13 = ((unsigned __int64)v11 - *(_QWORD *)this + 7) >> 3;
  if ( *(_QWORD *)this > (unsigned __int64)v11 )
    v13 = 0LL;
  if ( v13 )
  {
    do
    {
      v14 = *v12;
      ++v6;
      ++v12;
      --*(_DWORD *)(v14 + 124);
    }
    while ( v6 != v13 );
    v11 = (_QWORD *)*((_QWORD *)this + 1);
    v12 = *(__int64 **)this;
  }
  v15 = std::_Remove_if_unchecked_CProcessAttributionManager::Record_____ptr64_____ptr64__lambda_25a6e35ac28882ed86e8364a912a7bf9___(
          v12,
          (unsigned __int64)v11);
  if ( v15 != v11 )
    *((_QWORD *)this + 1) = std::_Move_unchecked<CProcessAttributionManager::Record * *,CProcessAttributionManager::Record * *>(
                              v11,
                              *((_QWORD *)this + 1),
                              v15);
}
