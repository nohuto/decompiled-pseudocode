/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00ECFD8
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00ED240 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  unsigned __int64 v7; // rdi
  _QWORD *PoolWithTag; // rsi
  __int64 i; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  char v13; // cl

  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == v3 )
  {
    if ( v3 )
    {
      v7 = 2LL * *(unsigned int *)(a1 + 12);
      if ( v7 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v7) = 16;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v7, 0x4D504F47u);
    if ( !PoolWithTag )
      return 3221225495LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
      PoolWithTag[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    v11 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)v11 < (unsigned int)v7 )
      memset(&PoolWithTag[v11], 0, 8LL * (unsigned int)(v7 - v11));
    if ( *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x4D504F47u);
    *(_QWORD *)a1 = PoolWithTag;
    *(_DWORD *)(a1 + 12) = v7;
  }
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v12) )
    {
      v13 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v12) = a2;
      *a3 = v12;
    }
    v12 = (unsigned int)(v12 + 1);
  }
  while ( !v13 );
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
