/*
 * XREFs of ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1C0159F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleArrayProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        int a2,
        void **a3,
        unsigned __int64 a4,
        _BYTE *Object)
{
  _BYTE *v5; // r12
  NTSTATUS v6; // ebp
  __int64 i; // r14
  __int64 v11; // rsi
  struct _OBJECT_TYPE *v12; // rax

  v5 = Object;
  v6 = 0;
  *Object = 0;
  if ( a2 == 3 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = (unsigned int)i;
      if ( (unsigned int)i >= a4 )
        break;
      v12 = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C01A1C58)();
      v6 = ObReferenceObjectByHandle(a3[i], 0xF0001u, v12, 1, (PVOID *)&Object, 0LL);
      if ( v6 < 0 )
        goto LABEL_10;
      a3[i] = Object;
    }
    if ( *((_QWORD *)this + 8) )
    {
      (*(void (__fastcall **)(DirectComposition::CCaptureRenderTargetMarshaler *))(*(_QWORD *)this + 280LL))(this);
      *((_DWORD *)this + 4) |= 0x100u;
    }
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = a3;
    a3 = 0LL;
    *((_QWORD *)this + 8) = a4;
    *v5 = 1;
LABEL_10:
    if ( a3 && (_DWORD)i )
    {
      do
      {
        ObfDereferenceObject(*a3++);
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
