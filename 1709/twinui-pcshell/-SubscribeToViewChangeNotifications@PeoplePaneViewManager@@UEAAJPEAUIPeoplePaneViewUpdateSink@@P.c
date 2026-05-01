/*
 * XREFs of ?SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@PEAK@Z @ 0x180112310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::SubscribeToViewChangeNotifications(
        PeoplePaneViewManager *this,
        struct IPeoplePaneViewUpdateSink *a2,
        unsigned int *a3)
{
  struct IPeoplePaneViewUpdateSink *v6; // rdi
  unsigned int v7; // ebp
  int v8; // ebx
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r14
  __int64 v14; // r14
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v17; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IPeoplePaneViewUpdateSink *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = a2;
  }
  v7 = *((_DWORD *)this + 102);
  *((_DWORD *)this + 102) = v7 + 1;
  *a3 = v7;
  v8 = 0;
  v9 = *((_QWORD *)this + 48);
  v10 = *((_QWORD *)this + 50);
  if ( v9 != v10 )
    goto LABEL_20;
  v11 = v9 + 1;
  v8 = -2147024774;
  if ( v11 <= 0xFFFFFFFE )
  {
    v8 = 0;
    if ( v11 > v10 )
    {
      v12 = 2 * v10;
      if ( !is_mul_ok(v10, 2uLL) )
      {
        v12 = -1LL;
        v8 = -2147024362;
      }
      if ( v8 < 0 )
        goto LABEL_25;
      v13 = v10 + 4096;
      if ( v12 - v10 <= 0x1000 )
        v13 = v12;
      if ( v11 > v13 )
        v13 = v11;
      if ( v13 > 0xFFFFFFFE )
        v13 = 4294967294LL;
      v17 = 0LL;
      if ( is_mul_ok(v13, 0x10uLL) )
      {
        v8 = CTCoAllocPolicy::Realloc(
               (IMalloc *)&v17,
               (v13 * (unsigned __int128)0x10uLL) >> 64,
               *((void **)this + 47),
               16 * v13,
               &v17);
        if ( v8 >= 0 )
        {
          *((_QWORD *)this + 50) = v13;
          *((_QWORD *)this + 47) = v17;
        }
      }
      else
      {
        v8 = -2147024362;
      }
    }
  }
  if ( v8 < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_26;
  }
LABEL_20:
  v14 = *((_QWORD *)this + 47) + 16 * (*((_QWORD *)this + 48))++;
  if ( v14 )
  {
    *(_QWORD *)v14 = v6;
    if ( v6 )
      (*(void (__fastcall **)(struct IPeoplePaneViewUpdateSink *))(*(_QWORD *)v6 + 8LL))(v6);
    *(_DWORD *)(v14 + 8) = v7;
  }
LABEL_26:
  if ( v6 )
    (*(void (__fastcall **)(struct IPeoplePaneViewUpdateSink *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v8;
}
