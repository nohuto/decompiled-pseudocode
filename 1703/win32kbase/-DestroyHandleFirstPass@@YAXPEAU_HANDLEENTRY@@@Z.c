/*
 * XREFs of ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00D8BA0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0049030 (HMUnlockObjectInternal.c)
 *     HMDestroyObject @ 0x1C007A340 (HMDestroyObject.c)
 */

void __fastcall DestroyHandleFirstPass(struct _HANDLEENTRY *a1)
{
  _QWORD **v2; // rbx
  _DWORD *v3; // rcx
  __int64 v5; // rdx
  unsigned int i; // r8d
  __int64 v7; // rcx

  v2 = (_QWORD **)((char *)gpKernelHandleTable + 16 * (unsigned int)((a1 - (struct _HANDLEENTRY *)qword_1C0189E38) >> 5));
  if ( *((_BYTE *)a1 + 24) == 22 )
  {
    v3 = (_DWORD *)(*v2)[2];
    if ( v3[2]-- == 1 )
      HMUnlockObjectInternal(v3);
  }
  v5 = (__int64)*v2;
  if ( *((_DWORD *)*v2 + 2) )
  {
    if ( *((_BYTE *)a1 + 24) == 13 )
    {
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_QWORD *)(v5 + 56) = 0LL;
      if ( *(_QWORD *)(v5 + 96) )
      {
        for ( i = 0; i < *(_DWORD *)(v5 + 88); *(_QWORD *)(*(_QWORD *)(v5 + 96) + 8 * v7) = 0LL )
          v7 = i++;
      }
      *(_DWORD *)(v5 + 88) = 0;
    }
  }
  else
  {
    HMDestroyObject(*v2);
  }
}
