/*
 * XREFs of ??1CAnimationLoggingManager@@UEAA@XZ @ 0x18017FB2C
 * Callers:
 *     ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x18017FC10 (--_GCAnimationLoggingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall CAnimationLoggingManager::~CAnimationLoggingManager(CAnimationLoggingManager *this)
{
  __int64 *v1; // rbx
  void *v3; // rcx
  char *v4; // rcx
  char **v5; // rax
  char *v6; // r9
  char *v7; // rcx
  char *v8; // rbx

  v1 = (__int64 *)*((_QWORD *)this + 12);
  *(_QWORD *)this = &CAnimationLoggingManager::`vftable';
  while ( 1 )
  {
    v1 = (__int64 *)*v1;
    if ( v1 == *((__int64 **)this + 12) )
      break;
    operator delete((void *)v1[4]);
  }
  v3 = (void *)*((_QWORD *)this + 19);
  if ( v3 )
    operator delete(v3);
  v4 = (char *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    std::_Deallocate(v4, (__int64)(*((_QWORD *)this + 16) - (_QWORD)v4) >> 3, 8uLL);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v5 = (char **)*((_QWORD *)this + 12);
  v6 = *v5;
  *v5 = (char *)v5;
  *(_QWORD *)(*((_QWORD *)this + 12) + 8LL) = *((_QWORD *)this + 12);
  v7 = (char *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 13) = 0LL;
  if ( v6 != v7 )
  {
    do
    {
      v8 = *(char **)v6;
      std::_Deallocate(v6, 1uLL, 0x28uLL);
      v7 = (char *)*((_QWORD *)this + 12);
      v6 = v8;
    }
    while ( v8 != v7 );
  }
  std::_Deallocate(v7, 1uLL, 0x28uLL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 56);
  CResource::~CResource(this);
}
