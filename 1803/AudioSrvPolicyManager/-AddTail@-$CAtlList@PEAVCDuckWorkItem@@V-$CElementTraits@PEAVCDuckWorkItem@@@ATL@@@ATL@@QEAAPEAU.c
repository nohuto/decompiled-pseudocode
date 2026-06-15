/*
 * XREFs of ?AddTail@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDuckWorkItem@@@Z @ 0x18000F374
 * Callers:
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x18000DBEC (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::AddTail(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_13;
  v5 = *(unsigned int *)(a1 + 40);
  if ( v5 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x18 )
    {
LABEL_8:
      v7 = 0LL;
      goto LABEL_9;
    }
    v5 *= 24LL;
  }
  if ( ~v5 < 8 )
    goto LABEL_8;
  v6 = malloc(v5 + 8);
  v7 = v6;
  if ( !v6 )
    goto LABEL_17;
  *v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v6;
LABEL_9:
  if ( !v7 )
LABEL_17:
    ATL::AtlThrowImpl(-2147024882);
  v8 = *(_DWORD *)(a1 + 40);
  for ( i = &v7[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
  {
    *i = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = i;
  }
LABEL_13:
  v10 = *(_QWORD **)(a1 + 32);
  v11 = *v10;
  v10[2] = *a2;
  *(_QWORD *)(a1 + 32) = v11;
  *v10 = 0LL;
  v10[1] = v3;
  ++*(_QWORD *)(a1 + 16);
  v12 = *(_QWORD **)(a1 + 8);
  if ( v12 )
    *v12 = v10;
  else
    *(_QWORD *)a1 = v10;
  result = v10;
  *(_QWORD *)(a1 + 8) = v10;
  return result;
}
