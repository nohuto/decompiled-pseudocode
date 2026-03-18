/*
 * XREFs of ?vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0129040
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012923C (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS32D8(struct BLTINFO *a1)
{
  unsigned int v1; // ebp
  unsigned __int8 (__fastcall *v2)(struct _XLATEOBJ *, unsigned __int8 *, unsigned int); // r13
  struct BLTINFO *v3; // r14
  _BYTE *v4; // rbx
  unsigned int *v5; // rdi
  unsigned int v6; // esi
  int v7; // eax
  struct _XLATEOBJ *v8; // rcx
  unsigned int v9; // ebp
  unsigned int v10; // eax
  int v11; // ebp
  ULONG v12; // edx
  _BYTE *v13; // r12
  unsigned int *v14; // r15
  unsigned int v15; // esi
  int v16; // ebx
  int v17; // edi
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned int v20; // ebp
  unsigned int v21; // [rsp+20h] [rbp-78h]
  unsigned int v22; // [rsp+24h] [rbp-74h]
  _BYTE *v23; // [rsp+28h] [rbp-70h]
  struct _XLATEOBJ *v24; // [rsp+30h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+38h] [rbp-60h]
  unsigned int *v26; // [rsp+40h] [rbp-58h]
  int v28; // [rsp+A8h] [rbp+10h]
  int v29; // [rsp+B0h] [rbp+18h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = XLATEOBJ_ulIndexToPalSurf;
  v3 = a1;
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v5 = (unsigned int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v6 = -(*((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 14)) & 3;
  v7 = *((_DWORD *)a1 + 8);
  v8 = *(struct _XLATEOBJ **)a1;
  if ( v6 > v1 )
    v6 = v1;
  v29 = v7;
  v9 = v1 - v6;
  v26 = v5;
  v23 = v4;
  v10 = v9 >> 2;
  v11 = v9 & 3;
  v21 = v10;
  v24 = v8;
  v22 = v6;
  v28 = v11;
  v12 = v8[1].pulXlate[6];
  if ( (v12 & 4) != 0 )
  {
    v2 = XLATEOBJ_RGB32ToPalSurf;
  }
  else if ( (v12 & 8) != 0 )
  {
    v2 = XLATEOBJ_BGR32ToPalSurf;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(v8);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v13 = v4;
      v14 = v5;
      if ( v6 )
      {
        v20 = v6;
        do
        {
          *v13++ = v2(v24, Xlate555, *v14++);
          --v20;
        }
        while ( v20 );
        v3 = a1;
        v11 = v28;
        v4 = v23;
      }
      if ( v21 )
      {
        v15 = v21;
        do
        {
          v16 = v2(v24, Xlate555, v14[3]) << 8;
          v17 = (v16 | v2(v24, Xlate555, v14[2])) << 8;
          v18 = (v17 | v2(v24, Xlate555, v14[1])) << 8;
          v19 = v2(v24, Xlate555, *v14);
          v14 += 4;
          *(_DWORD *)v13 = v18 | v19;
          v13 += 4;
          --v15;
        }
        while ( v15 );
        v6 = v22;
        v3 = a1;
        v11 = v28;
        v4 = v23;
        v5 = v26;
      }
      if ( v11 )
      {
        do
        {
          *v13++ = v2(v24, Xlate555, *v14++);
          --v11;
        }
        while ( v11 );
        v11 = v28;
        v4 = v23;
        v5 = v26;
      }
      if ( !--v29 )
        break;
      v5 = (unsigned int *)((char *)v5 + *((int *)v3 + 10));
      v4 += *((int *)v3 + 11);
      v26 = v5;
      v23 = v4;
    }
  }
}
