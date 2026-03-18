/*
 * XREFs of ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00508E8
 * Callers:
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0052480 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipManager::ProcessCompletedProducerPresentUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD **v7; // r9
  PRKEVENT v8; // r11
  __int64 v9; // r10
  _QWORD *v10; // r8
  struct _KEVENT *v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  char *v17; // rbx
  char *v18; // rax
  char **v19; // rcx
  __int64 v20; // [rsp+30h] [rbp+8h]

  if ( *((PRKEVENT *)a2 + 8) == this[22] )
  {
    v4 = this + 15;
    if ( (_QWORD *)*v4 == v4 )
      KeSetEvent(this[25], 1, 0);
    v5 = (_QWORD *)v4[1];
    v6 = (_QWORD *)((char *)a2 + 24);
    if ( (_QWORD *)*v5 != v4 )
      __fastfail(3u);
    *v6 = v4;
    v7 = (_QWORD **)(this + 17);
    v6[1] = v5;
    *v5 = v6;
    v4[1] = v6;
    this[22] = (PRKEVENT)((char *)this[22] + 1);
    v8 = this[22];
    if ( *v7 != v7 )
    {
      v9 = v20;
      while ( 1 )
      {
        v10 = *v7;
        if ( *v7 == v7 )
          break;
        do
        {
          v11 = *(struct _KEVENT **)(((unsigned __int64)(v10 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64))
                                   + 0x40);
          if ( v11 == v8 )
          {
            v9 = (unsigned __int64)(v10 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64);
            goto LABEL_13;
          }
          v10 = (_QWORD *)*v10;
        }
        while ( v10 != v7 );
        if ( v11 != v8 )
          return;
LABEL_13:
        v12 = (_QWORD *)((v9 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)(v9 + 16) >> 64));
        v13 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12
          || (v14 = *(_QWORD **)(((v9 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)(v9 + 16) >> 64)) + 8),
              (_QWORD *)*v14 != v12) )
        {
          __fastfail(3u);
        }
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        v12[1] = v12;
        *v12 = v12;
        v15 = (_QWORD *)v4[1];
        v16 = (_QWORD *)((v9 + 24) & -(__int64)(v9 != 0));
        if ( (_QWORD *)*v15 != v4 )
          __fastfail(3u);
        *v16 = v4;
        *(_QWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 8) = v15;
        *v15 = v16;
        v4[1] = v16;
        this[22] = (PRKEVENT)((char *)this[22] + 1);
        v8 = this[22];
      }
    }
  }
  else
  {
    v17 = (char *)(this + 17);
    v18 = (char *)a2 + 24;
    v19 = (char **)this[18];
    if ( *v19 != v17 )
      __fastfail(3u);
    *(_QWORD *)v18 = v17;
    *((_QWORD *)a2 + 4) = v19;
    *v19 = v18;
    *((_QWORD *)v17 + 1) = v18;
  }
}
