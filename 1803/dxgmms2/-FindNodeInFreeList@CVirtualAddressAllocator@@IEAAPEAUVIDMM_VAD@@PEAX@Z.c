/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C005A338
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0059EA0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0058D24 (-CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0059950 (-CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r12
  struct _RTL_BALANCED_NODE *j; // rbx
  BOOL v6; // eax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  struct _RTL_BALANCED_NODE *v9; // rcx
  unsigned __int64 v10; // rax
  struct _RTL_BALANCED_NODE *result; // rax
  struct _RTL_BALANCED_NODE *v12; // r14
  struct _RTL_BALANCED_NODE *i; // rdi
  int v14; // eax
  struct _RTL_BALANCED_NODE *v15; // rax
  struct _RTL_BALANCED_NODE *v16; // rcx
  struct _RTL_BALANCED_NODE *v17; // rdx
  struct _RTL_BALANCED_NODE *v18; // r8
  struct _RTL_BALANCED_NODE *v19; // rax
  unsigned __int64 v20; // rdx
  struct _RTL_BALANCED_NODE *v21; // rax
  struct _RTL_BALANCED_NODE *v22; // rcx
  struct _RTL_BALANCED_NODE *v23; // rcx
  struct _RTL_BALANCED_NODE *v24; // rax
  struct _RTL_BALANCED_NODE *v25; // rcx
  struct _RTL_BALANCED_NODE *v26; // rcx

  v2 = *a2;
  j = 0LL;
  if ( *a2 || a2[2] || a2[3] != *((_QWORD *)this + 2) )
  {
    v12 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
    i = v12;
    while ( i )
    {
      v14 = CompareVadSizeLessOrEqualAvl(a2 + 4, i);
      if ( v14 >= 0 )
      {
        if ( v14 <= 0 )
          break;
        i = i->Children[1];
      }
      else
      {
        i = i->Children[0];
      }
    }
    if ( i )
      goto LABEL_26;
    while ( v12 )
    {
      i = v12;
      v12 = v12->Children[0];
    }
    while ( 1 )
    {
      if ( !i )
        goto LABEL_15;
LABEL_26:
      v15 = i[1].Children[0];
      if ( v2 )
      {
        if ( v2 >= (unsigned __int64)v15 && (struct _RTL_BALANCED_NODE *)a2[1] <= i[1].Children[1] )
        {
          a2[7] = v2;
          goto LABEL_39;
        }
      }
      else
      {
        v16 = (struct _RTL_BALANCED_NODE *)a2[3];
        if ( v15 < v16 )
        {
          v17 = i[1].Children[1];
          v18 = (struct _RTL_BALANCED_NODE *)a2[2];
          if ( v17 > v18 )
          {
            if ( v15 > v18 )
              v18 = i[1].Children[0];
            if ( v17 < v16 )
              v16 = i[1].Children[1];
            v19 = (*((_DWORD *)this + 34) & 2) != 0
                ? (struct _RTL_BALANCED_NODE *)((char *)v16 - a2[4])
                : (struct _RTL_BALANCED_NODE *)((char *)v18 + a2[5]);
            v20 = (unsigned __int64)v19 & a2[6];
            if ( v20 >= (unsigned __int64)v18 && v20 < (unsigned __int64)v16 && (unsigned __int64)v16 - v20 >= a2[4] )
            {
              a2[7] = v20;
LABEL_39:
              j = i;
              goto LABEL_15;
            }
          }
        }
      }
      v21 = i->Children[1];
      v22 = i;
      if ( v21 )
      {
        v23 = v21->Children[0];
        for ( i = i->Children[1]; v23; v23 = v23->Children[0] )
          i = v23;
      }
      else
      {
        while ( 1 )
        {
          i = (struct _RTL_BALANCED_NODE *)(i->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || i->Children[0] == v22 )
            break;
          v22 = i;
        }
      }
    }
  }
  j = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  while ( j )
  {
    v6 = CompareVadSizeGreaterOrEqualAvl(a2 + 4, j);
    if ( v6 < 0 )
    {
      j = j->Children[0];
    }
    else
    {
      if ( v6 <= 0 )
        break;
      j = j->Children[1];
    }
  }
  if ( j )
  {
    v7 = a2[5];
    v8 = a2[6];
    do
    {
      v9 = j[1].Children[1];
      v10 = v8 & ((unsigned __int64)j[1].Children[0] + v7);
      if ( v10 < (unsigned __int64)v9 && (unsigned __int64)v9 - v10 >= a2[4] )
        break;
      v24 = j->Children[1];
      v25 = j;
      if ( v24 )
      {
        v26 = v24->Children[0];
        for ( j = j->Children[1]; v26; v26 = v26->Children[0] )
          j = v26;
      }
      else
      {
        while ( 1 )
        {
          j = (struct _RTL_BALANCED_NODE *)(j->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || j->Children[0] == v25 )
            break;
          v25 = j;
        }
      }
    }
    while ( j );
    if ( j )
    {
      if ( (*((_DWORD *)this + 34) & 2) != 0 )
        a2[7] = v8 & ((unsigned __int64)j[1].Children[1] - a2[4]);
      else
        a2[7] = v8 & ((unsigned __int64)j[1].Children[0] + v7);
    }
  }
LABEL_15:
  result = j;
  *((_DWORD *)this + 34) ^= 2 * (*((_DWORD *)this + 34) & 1);
  return result;
}
