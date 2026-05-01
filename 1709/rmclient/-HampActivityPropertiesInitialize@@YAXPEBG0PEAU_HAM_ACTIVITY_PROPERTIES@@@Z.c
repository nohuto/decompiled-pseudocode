/*
 * XREFs of ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180001890
 * Callers:
 *     HamPopulateActivityProperties @ 0x180001820 (HamPopulateActivityProperties.c)
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

void __fastcall HampActivityPropertiesInitialize(char *a1, char *a2, struct _HAM_ACTIVITY_PROPERTIES *a3)
{
  _WORD *v6; // r9
  __int64 v7; // rdx
  signed __int64 v8; // rdi
  __int16 v9; // ax
  _WORD *v10; // rax
  signed __int64 v11; // rbx
  __int64 v12; // rdx
  __int16 v13; // cx

  memset_0(a3, 0, 0x180uLL);
  v6 = (_WORD *)((char *)a3 + 4);
  v7 = 64LL;
  v8 = a1 - ((char *)a3 + 4);
  while ( v7 != -2147483582 )
  {
    v9 = *(_WORD *)((char *)v6 + v8);
    if ( !v9 )
      break;
    *v6++ = v9;
    if ( !--v7 )
    {
      --v6;
      break;
    }
  }
  v10 = (_WORD *)((char *)a3 + 132);
  *v6 = 0;
  v11 = a2 - ((char *)a3 + 132);
  v12 = 64LL;
  while ( v12 != -2147483582 )
  {
    v13 = *(_WORD *)((char *)v10 + v11);
    if ( !v13 )
      break;
    *v10++ = v13;
    if ( !--v12 )
    {
      --v10;
      break;
    }
  }
  *v10 = 0;
  *((_DWORD *)a3 + 65) = 4;
  memset_0((char *)a3 + 272, 0, 0x70uLL);
  *((_DWORD *)a3 + 76) = 0;
  *((_WORD *)a3 + 152) |= 1u;
  memset_0((char *)a3 + 312, 0, 0x40uLL);
  *((_DWORD *)a3 + 92) = 1;
  *((_QWORD *)a3 + 43) = -1LL;
  *((_QWORD *)a3 + 42) = -1LL;
  *((_QWORD *)a3 + 41) = -1LL;
  *((_QWORD *)a3 + 40) = -1LL;
  *((_DWORD *)a3 + 88) = 100;
}
