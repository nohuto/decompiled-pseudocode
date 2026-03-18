/*
 * XREFs of KsepGetShimCallbacksForDriver @ 0x1404B3A9C
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x1404B3890 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     KsepLogInfo @ 0x14006D95C (KsepLogInfo.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KsepDebugPrint @ 0x140208448 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020848C (KsepLogError.c)
 *     RtlAssert @ 0x14023DB30 (RtlAssert.c)
 *     KsepIsModuleShimmed @ 0x1404B4F4C (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KsepGetShimCallbacksForDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  _DWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  _DWORD *v14; // rsi
  int v15; // r12d
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+80h] [rbp+18h]
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  v26 = 0LL;
  if ( !a2 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_14034F864[2 * v19] = -1073740768;
    KsepHistoryErrors[2 * v19] = 459505;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("IoCallbacks != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x2F1u, 0LL);
  }
  memset(a2, 0, 0x100uLL);
  if ( !(unsigned int)KsepIsModuleShimmed(&KseEngine, a1, &v26) )
    return (unsigned int)-1073741275;
  v6 = *(_DWORD *)(v26 + 24);
  v7 = *(_QWORD *)(v26 + 32);
  if ( v6 )
  {
    v8 = v7 + 72;
    v25 = *(unsigned int *)(v26 + 24);
    v23 = v7 + 72;
    v9 = v6;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v8 + 28LL) & 4) == 0 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
        if ( !v10 )
        {
          v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14034F864[2 * v20] = -1073740768;
          KsepHistoryErrors[2 * v20] = 459558;
          if ( (KsepDebugFlag & 4) != 0 )
          {
            RtlAssert("CurrentShim != NULL", "minkernel\\ntos\\kshim\\kseloader.c", 0x326u, 0LL);
            v9 = v25;
          }
        }
        v11 = *(_DWORD **)(v10 + 48);
        LODWORD(v12) = 0;
        v24 = 0;
        if ( *v11 != 4 )
          break;
      }
LABEL_25:
      v8 = v23 + 80;
      --v9;
      v23 += 80LL;
      v25 = v9;
      if ( !v9 )
        goto LABEL_26;
    }
    v13 = 0LL;
    while ( 1 )
    {
      if ( v11[v13] == 3 )
      {
        v14 = *(_DWORD **)&v11[v13 + 4];
        v15 = 0;
        if ( *v14 != 2 )
          break;
      }
LABEL_23:
      v11 = *(_DWORD **)(v10 + 48);
      v12 = (unsigned int)(v12 + 1);
      v24 = v12;
      v13 = 6 * v12;
      if ( v11[6 * v12] == 4 )
      {
        v9 = v25;
        goto LABEL_25;
      }
    }
    v16 = 0LL;
    while ( 1 )
    {
      v17 = v14[v16 + 2];
      if ( v17 == 1 )
      {
        if ( *a2 )
        {
          v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * (unsigned int)v21] = 459586;
          goto LABEL_48;
        }
        *a2 = *(_QWORD *)&v14[v16 + 4];
      }
      else
      {
        switch ( v14[v16 + 2] )
        {
          case 2:
            if ( a2[1] )
            {
              v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * (unsigned int)v21] = 459601;
              goto LABEL_48;
            }
            a2[1] = *(_QWORD *)&v14[v16 + 4];
            break;
          case 3:
            if ( a2[2] )
            {
              v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * (unsigned int)v21] = 459616;
              goto LABEL_48;
            }
            a2[2] = *(_QWORD *)&v14[v16 + 4];
            break;
          case 4:
            if ( a2[3] )
            {
              v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * (unsigned int)v21] = 459631;
              goto LABEL_48;
            }
            a2[3] = *(_QWORD *)&v14[v16 + 4];
            break;
          default:
            if ( (unsigned int)(v17 - 100) > 0x1B )
            {
              v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              dword_14034F864[2 * v22] = -1073741811;
              KsepHistoryErrors[2 * v22] = 459662;
              if ( (KsepDebugFlag & 2) != 0 )
                KsepDebugPrint(9LL, "KSE: Invalid callback code encountered: %u\n", v14[v16 + 2]);
              KsepLogError(9, "KSE: Invalid callback code encountered: %u\n", v14[v16 + 2]);
              break;
            }
            v18 = (unsigned int)(v17 - 100);
            if ( a2[v18 + 4] )
            {
              v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
              KsepHistoryErrors[2 * (unsigned int)v21] = 459649;
LABEL_48:
              dword_14034F864[2 * v21] = -1073741823;
              if ( (KsepDebugFlag & 2) != 0 )
                KsepDebugPrint(9LL, "KSE: Two shims are hooking same callback! \n");
              KsepLogError(9, "KSE: Two shims are hooking same callback! \n");
              break;
            }
            a2[v18 + 4] = *(_QWORD *)&v14[v16 + 4];
            break;
        }
      }
      v16 = 8LL * (unsigned int)++v15;
      v14 = *(_DWORD **)(*(_QWORD *)(v10 + 48) + v13 * 4 + 16);
      if ( v14[v16] == 2 )
      {
        LODWORD(v12) = v24;
        goto LABEL_23;
      }
    }
  }
LABEL_26:
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 459682LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(9LL, "KSE: GetShimCallbacks succeeded\n");
  KsepLogInfo(9LL, (__int64)"KSE: GetShimCallbacks succeeded\n");
  return v2;
}
