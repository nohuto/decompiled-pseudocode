/*
 * XREFs of ?FindSaDeviceByResourceId@CDeviceGraphStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x180096720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphStore::FindSaDeviceByResourceId(
        CDeviceGraphStore *this,
        __int64 a2,
        struct ISaDeviceProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 *i; // rax
  unsigned int v10; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *a3 = 0LL;
  v7 = (__int64 *)**((_QWORD **)this + 7);
  while ( v7 != *((__int64 **)this + 7) )
  {
    if ( (*(int (__fastcall **)(__int64, __int64, struct ISaDeviceProxy **))(*(_QWORD *)v7[8] + 136LL))(v7[8], a2, a3) >= 0 )
    {
      v10 = 0;
      goto LABEL_15;
    }
    if ( !*((_BYTE *)v7 + 25) )
    {
      v8 = (__int64 *)v7[2];
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v7 = i;
        v7 = i;
      }
      else
      {
        do
        {
          v7 = v8;
          v8 = (__int64 *)*v8;
        }
        while ( !*((_BYTE *)v8 + 25) );
      }
    }
  }
  v10 = -2005139430;
LABEL_15:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
