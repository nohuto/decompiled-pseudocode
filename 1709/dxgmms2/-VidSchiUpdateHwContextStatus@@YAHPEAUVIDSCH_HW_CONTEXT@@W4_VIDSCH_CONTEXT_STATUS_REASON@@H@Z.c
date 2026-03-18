/*
 * XREFs of ?VidSchiUpdateHwContextStatus@@YAHPEAUVIDSCH_HW_CONTEXT@@W4_VIDSCH_CONTEXT_STATUS_REASON@@H@Z @ 0x1C002D8FC
 * Callers:
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002D7D0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C0021B54 (McTemplateK0pqq.c)
 */

__int64 __fastcall VidSchiUpdateHwContextStatus(__int64 a1, int a2, __int64 a3)
{
  int v3; // r14d
  __int64 v4; // rdi
  struct _KEVENT *v7; // rbp
  __int64 v8; // r9
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 32);
  v7 = *(struct _KEVENT **)(v4 + 24);
  if ( bTracingEnabled )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( !v8 || (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      v8 = a1;
    if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqq(a1, &EventUpdateContextStatus, a3, v8, a2, a3);
  }
  v9 = (_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v10 + 8) != a1 + 8 || (_QWORD *)*v11 != v9 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  if ( (*(_DWORD *)(a1 + 124) & 1) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 2780))-- == 1 )
    {
      Blink = v7[16].Header.WaitListHead.Blink;
      _bittestandreset64((__int64 *)&Blink, *(unsigned __int16 *)(v4 + 4));
      v7[16].Header.WaitListHead.Blink = Blink;
    }
    *(_DWORD *)(a1 + 124) &= ~1u;
  }
  if ( a2 )
  {
    if ( a2 == 10 )
    {
      v16 = v4 + 2536;
      v17 = *(_QWORD **)(v16 + 8);
      if ( *v17 != v16 )
        __fastfail(3u);
      *v9 = v16;
      *(_QWORD *)(a1 + 16) = v17;
      *v17 = v9;
      *(_QWORD *)(v16 + 8) = v9;
      if ( (*(_DWORD *)(a1 + 124) & 0x200) != 0 )
      {
        --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1056LL);
        *(_DWORD *)(a1 + 124) &= ~0x200u;
      }
      *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 0xFFFFFE7F | 0x100;
      v18 = *(_QWORD *)(a1 + 24);
      if ( !*(_DWORD *)(v18 + 1056) )
      {
        *(_BYTE *)(v18 + 1052) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1053LL) = 0;
        KeSetEvent(v7 + 117, 0, 0);
      }
    }
    else
    {
      v19 = *(_QWORD **)(v4 + 2496);
      if ( *v19 != v4 + 2488 )
        __fastfail(3u);
      *v9 = v4 + 2488;
      *(_QWORD *)(a1 + 16) = v19;
      *v19 = v9;
      *(_QWORD *)(v4 + 2496) = v9;
    }
  }
  else
  {
    v14 = v4 + 2504;
    v15 = *(_QWORD **)(v14 + 8);
    if ( *v15 != v14 )
      __fastfail(3u);
    *v9 = v14;
    *(_QWORD *)(a1 + 16) = v15;
    *v15 = v9;
    *(_QWORD *)(v14 + 8) = v9;
    *(_DWORD *)(a1 + 124) = 0;
  }
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 256) + 8LL)) = a2;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 256) + 132) = v3;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 256) + 136) = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a1 + 256) = ((unsigned __int8)*(_DWORD *)(a1 + 256) + 1) & 7;
  return 0LL;
}
