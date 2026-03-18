/*
 * XREFs of Isoch_Transfer_PrepareForCompletion @ 0x1C002C1D0
 * Callers:
 *     Isoch_Transfer_Complete @ 0x1C002BE74 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002BF2C (Isoch_Transfer_CompleteCancelable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x1C002D280 (WPP_RECORDER_SF_DDqdDDDD.c)
 */

void __fastcall Isoch_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // r10
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  _DWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax

  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(unsigned __int16 *)(v7 + 2);
  if ( v8 <= 0x38 || (v9 = 52LL, v8 > 0x3A) )
    v9 = 36LL;
  v10 = 0;
  v11 = 0LL;
  for ( *(_DWORD *)(v7 + v9) = *(_DWORD *)(a2 + 84); (unsigned int)v11 < *(_DWORD *)(a2 + 96); v11 = (unsigned int)(v11 + 1) )
  {
    v12 = (_DWORD *)(v7 + 4 * (v11 + 2 * v11 + 37));
    if ( a3 == -1 )
    {
      if ( *v12 == -1 )
        *v12 = -1073610752;
    }
    else
    {
      *v12 = a3;
    }
    if ( *v12 )
    {
      ++*(_DWORD *)(v7 + 136);
      ++*(_DWORD *)(a1 + 260);
    }
    else
    {
      ++v10;
    }
    ++*(_DWORD *)(a1 + 256);
  }
  if ( a4 == -1 )
  {
    if ( *(_DWORD *)(v7 + 136) == *(_DWORD *)(a2 + 96) )
      *(_DWORD *)(v7 + 4) = -1073739008;
    else
      *(_DWORD *)(v7 + 4) = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 4) = a4;
  }
  v13 = *(_DWORD *)(v7 + 4);
  if ( v13 <= -1073738240 )
  {
    if ( v13 == -1073738240 )
    {
      v14 = -1073741637;
      goto LABEL_35;
    }
    if ( v13 == -2147483136 || v13 == -2147482880 || v13 == -2147482112 || v13 == -1073739264 )
    {
      v14 = -1073741811;
      goto LABEL_35;
    }
LABEL_31:
    v14 = -1073741823;
    goto LABEL_35;
  }
  switch ( v13 )
  {
    case -1073737728:
      v14 = -1073741670;
      break;
    case -1073713152:
      v14 = -1073741810;
      break;
    case -1073676288:
      v14 = -1073741536;
      break;
    default:
      if ( (unsigned int)v13 <= 1 )
      {
        v14 = 0;
        break;
      }
      goto LABEL_31;
  }
LABEL_35:
  *(_DWORD *)(a2 + 68) = v14;
  ++*(_DWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) += *(unsigned int *)(a2 + 84);
  if ( *(int *)(a2 + 68) < 0 )
    ++*(_DWORD *)(a1 + 244);
  WPP_RECORDER_SF_DDqdDDDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v11,
    a4);
  v15 = *(_QWORD *)(a2 + 72);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a2 + 48);
    v17 = *(unsigned __int16 *)(v16 + 2);
    if ( v17 <= 0x38 || v17 > 0x3A )
      v18 = *(_QWORD *)(v16 + 48);
    else
      v18 = 0LL;
    if ( v15 != v18 )
    {
      IoFreeMdl(*(PMDL *)(a2 + 72));
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
