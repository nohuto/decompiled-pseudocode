/*
 * XREFs of ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180023270
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z @ 0x180023170 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampUtilExternalAccessMaskFromMaskData@@YAXPEAU_HAM_EXTERNAL_RESOURCE_MASK@@PEAU_RTL_BITMAP@@@Z @ 0x18003F92C (-HampUtilExternalAccessMaskFromMaskData@@YAXPEAU_HAM_EXTERNAL_RESOURCE_MASK@@PEAU_RTL_BITMAP@@@Z.c)
 */

void __fastcall ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
        ExecutionModel *this,
        struct _HAM_ACTIVITY_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 v3; // rax
  int v6; // ecx
  __int16 v7; // cx
  int v8; // eax
  unsigned __int8 v9; // al
  int v10; // eax
  unsigned __int64 v11; // rdi
  bool v12; // r9
  __int16 v13; // ax
  __int16 v14; // r9
  __int16 v15; // cx
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  struct _RTL_BITMAP v18; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 40);
  if ( (v3 & 8) != 0 )
    *((_QWORD *)a2 + 8) = *((_QWORD *)this + 44);
  if ( (v3 & 4) != 0 )
    *((_QWORD *)a2 + 3) = *((_QWORD *)this + 43);
  if ( (v3 & 2) != 0 )
    *((_QWORD *)a2 + 7) = *((_QWORD *)this + 42);
  if ( (v3 & 1) != 0 )
    *((_QWORD *)a2 + 45) = *((_QWORD *)this + 41);
  v6 = *((_DWORD *)this + 91);
  if ( (v3 & 0x20) != 0 )
  {
    *((_DWORD *)a2 + 11) &= 0xFFFFFFFC;
    *((_DWORD *)a2 + 11) |= v6 & 3;
  }
  if ( (v3 & 0x80u) != 0LL )
  {
    *((_DWORD *)a2 + 11) &= ~8u;
    *((_DWORD *)a2 + 11) |= v6 & 8;
  }
  if ( (v3 & 0x200) != 0 )
    *((_DWORD *)a2 + 11) ^= (*((_DWORD *)a2 + 11) ^ *((_DWORD *)this + 91)) & 0x20;
  v7 = 1;
  if ( (*((_BYTE *)this + 312) & 1) != 0 )
  {
    v8 = *((_DWORD *)this + 78);
    if ( v8 != 1 )
    {
      *((_DWORD *)a2 + 4) = v8;
      v9 = *((_BYTE *)this + 315);
      if ( v9 )
      {
        *((_DWORD *)a2 + 8) = v9;
        *((_DWORD *)a2 + 2) = v9;
        *((_DWORD *)a2 + 24) = v9;
        *((_DWORD *)a2 + 30) = v9;
        *((_DWORD *)a2 + 36) = v9;
        *((_DWORD *)a2 + 8) = *((unsigned __int8 *)this + 316);
      }
    }
  }
  v10 = *((_DWORD *)this + 74);
  if ( (v10 & 2) != 0 )
  {
    *((_QWORD *)a2 + 17) = *((_QWORD *)this + 35);
    *((_DWORD *)a2 + 32) = 2;
    v10 = *((_DWORD *)this + 74);
  }
  if ( (v10 & 4) != 0 )
  {
    *((_QWORD *)a2 + 14) = *((_QWORD *)this + 36);
    *((_DWORD *)a2 + 26) = 1;
  }
  v11 = 0LL;
  v12 = (*(_DWORD *)this & 1) == 0;
  if ( (*(_DWORD *)this & 0x80u) == 0 )
  {
    if ( (*(_DWORD *)this & 1) != 0 || (*(_DWORD *)this & 0x10) == 0 )
      v7 = 0;
    v13 = v7 | *((_WORD *)a2 + 20) & 0xFFFE;
    *((_WORD *)a2 + 20) = v13;
  }
  else
  {
    *((_BYTE *)a2 + 42) |= 0x20u;
    v13 = *((_WORD *)a2 + 20);
  }
  v14 = v13 & 0xFFFD | (2 * (v12 | 0x10));
  *((_WORD *)a2 + 20) = v14;
  v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)~(unsigned __int8)(*(_DWORD *)this >> 1)) & 8;
  *((_WORD *)a2 + 20) = v15;
  *((_WORD *)a2 + 20) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)~(unsigned __int8)*(_WORD *)this) & 0x10;
  HampUtilExternalAccessMaskFromMaskData((ExecutionModel *)((char *)this + 376), &v18);
  v16 = (_DWORD *)((char *)a2 + 164);
  v17 = 47LL;
  do
  {
    if ( _bittest64((const signed __int64 *)v18.Buffer, v11) )
      *v16 = 2;
    ++v11;
    ++v16;
    --v17;
  }
  while ( v17 );
}
