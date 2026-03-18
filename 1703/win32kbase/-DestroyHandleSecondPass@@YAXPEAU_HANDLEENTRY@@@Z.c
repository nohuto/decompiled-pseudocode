/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00D8C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DestroyHandleSecondPass(_BYTE *a1)
{
  char *v1; // rdx

  v1 = (char *)gpKernelHandleTable + 16 * (unsigned int)((a1 - (_BYTE *)qword_1C0189E38) >> 5);
  if ( *(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    *(_DWORD *)(*(_QWORD *)v1 + 8LL) = 0;
  HMDestroyUnlockedObject(a1);
}
