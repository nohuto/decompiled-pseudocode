/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00C5248
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C54AC (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v7; // edi
  _QWORD *PoolWithTag; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  __int64 i; // r8
  __int64 v13; // rax
  char v14; // cl

  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 )
    {
      v10 = 2 * v3;
      if ( v10 > 0xFFFFFFFF )
        return 3221225621LL;
      v7 = v10;
    }
    else
    {
      v7 = 16;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4D504F47u);
    if ( !PoolWithTag )
      return 3221225495LL;
    v11 = *(_DWORD *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < v11; v11 = *(_DWORD *)(a1 + 12) )
    {
      PoolWithTag[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( v11 < v7 )
      memset(&PoolWithTag[v11], 0, 8LL * (v7 - v11));
    if ( *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x4D504F47u);
    *(_QWORD *)a1 = PoolWithTag;
    *(_DWORD *)(a1 + 12) = v7;
  }
  v13 = 0LL;
  v14 = 0;
  do
  {
    if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v13) )
    {
      v14 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v13) = a2;
      *a3 = v13;
    }
    v13 = (unsigned int)(v13 + 1);
  }
  while ( !v14 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
