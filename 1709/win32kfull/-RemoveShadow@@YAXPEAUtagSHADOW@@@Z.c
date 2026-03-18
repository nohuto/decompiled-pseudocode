/*
 * XREFs of ?RemoveShadow@@YAXPEAUtagSHADOW@@@Z @ 0x1C020CC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RemoveShadow(struct tagSHADOW *a1)
{
  struct tagSHADOW **v1; // rdx
  struct tagSHADOW *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v1 = &gpshadowFirst;
  if ( gpshadowFirst )
  {
    while ( 1 )
    {
      v3 = *v1;
      if ( *v1 == a1 )
        break;
      v1 = (struct tagSHADOW **)((char *)v3 + 16);
      if ( !*((_QWORD *)v3 + 2) )
        return;
    }
    *v1 = (struct tagSHADOW *)*((_QWORD *)v3 + 2);
    HMAssignmentUnlock(a1);
    HMAssignmentUnlock((char *)a1 + 8);
    Win32FreePool(v3, v4, v5);
  }
}
