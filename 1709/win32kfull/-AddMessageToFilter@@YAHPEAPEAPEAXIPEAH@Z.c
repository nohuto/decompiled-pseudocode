/*
 * XREFs of ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00CD0D4
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C00CCB10 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00CCD08 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x1C00CD218 (-MsgLookupTableAlloc@@YAPEAXI@Z.c)
 */

__int64 __fastcall AddMessageToFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rdi
  unsigned int v4; // ebx
  unsigned __int64 v5; // r13
  _BYTE *v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // r8
  int v10; // edx
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r8

  v3 = *a1;
  v4 = 0;
  v5 = a2;
  v7 = 0LL;
  if ( !*a1 )
  {
    v3 = (void **)MsgLookupTableAlloc(0);
    if ( !v3 )
      goto LABEL_14;
  }
  v8 = v3[v5 >> 13];
  if ( !v8 )
  {
    v8 = MsgLookupTableAlloc(1u);
    if ( !v8 )
      goto LABEL_23;
  }
  v7 = (_BYTE *)v8[(v5 >> 9) & 0xF];
  if ( !v7 )
  {
    v7 = MsgLookupTableAlloc(2u);
    if ( !v7 )
    {
      if ( v8 != v3[v5 >> 13] )
        Win32FreePool(v8, v14, v15);
LABEL_23:
      if ( v3 && v3 != *a1 )
        Win32FreePool(v3, v14, v15);
      goto LABEL_14;
    }
  }
  v9 = (v5 >> 3) & 0x3F;
  v10 = (unsigned __int8)v7[v9];
  v11 = v10 & (1 << (v5 & 7));
  if ( !v11 )
    v7[v9] = v10 | (1 << (v5 & 7));
  if ( a3 )
    *a3 = v11;
  v12 = (v5 >> 9) & 0xF;
  if ( v7 != (_BYTE *)v8[v12] )
    v8[v12] = v7;
  if ( v8 != v3[v5 >> 13] )
    v3[v5 >> 13] = v8;
  if ( v3 != *a1 )
    *a1 = v3;
LABEL_14:
  LOBYTE(v4) = v7 != 0LL;
  return v4;
}
