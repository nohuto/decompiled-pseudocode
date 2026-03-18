/*
 * XREFs of ViDeadlockForgetResourceHistory @ 0x1407BC804
 * Callers:
 *     ViDeadlockTrimResources @ 0x1407BD294 (ViDeadlockTrimResources.c)
 * Callees:
 *     ViDeadlockRemoveNode @ 0x1407BCCA8 (ViDeadlockRemoveNode.c)
 */

PVOID __fastcall ViDeadlockForgetResourceHistory(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  int v4; // ebp
  int v8; // r12d
  PVOID result; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  unsigned int v12; // ebp
  _QWORD *v13; // rbx
  unsigned int v14; // ecx
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  unsigned int v17; // [rsp+70h] [rbp+18h]

  v17 = a3;
  v4 = 0;
  v8 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    result = (PVOID)*(unsigned int *)(a1 + 4);
    if ( (unsigned __int16)result >= a2 )
    {
      v10 = (_QWORD **)(a1 + 24);
      v11 = *(_QWORD **)(a1 + 24);
      if ( v11 != (_QWORD *)(a1 + 24) )
      {
        v12 = *((_DWORD *)ViDeadlockGlobals + 8201);
        while ( 1 )
        {
          v13 = v11 - 5;
          v11 = (_QWORD *)*v11;
          v14 = *((_DWORD *)v13 + 18) >> 3;
          if ( v12 <= v14 )
          {
            if ( v14 - v12 < a3 )
            {
LABEL_9:
              ViDeadlockRemoveNode(v13, 0LL);
              ++v8;
              a3 = v17;
              *v13 = *a4;
              *a4 = v13;
            }
          }
          else if ( v12 - v14 > a3 )
          {
            goto LABEL_9;
          }
          if ( v11 == v10 )
          {
            v4 = 0;
            break;
          }
        }
      }
      *((_DWORD *)ViDeadlockGlobals + 8197) += v8;
      result = (PVOID)*(unsigned int *)(a1 + 4);
      if ( (unsigned __int16)result >= a2 )
      {
        v15 = *v10;
        while ( v15 != v10 && (unsigned __int16)*(_DWORD *)(a1 + 4) >= a2 )
        {
          v16 = v15 - 5;
          v15 = (_QWORD *)*v15;
          ViDeadlockRemoveNode(v16, 0LL);
          ++v4;
          *v16 = *a4;
          *a4 = v16;
        }
        result = ViDeadlockGlobals;
        *((_DWORD *)ViDeadlockGlobals + 8198) += v4;
      }
    }
  }
  return result;
}
