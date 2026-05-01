/*
 * XREFs of ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x18005C300
 * Callers:
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x18004F31C (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::GetNextMessage(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  char *v2; // rsi
  char *v4; // rcx
  unsigned int v5; // edi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  int v9; // ebx

  v2 = (char *)this + 1432;
  v4 = (char *)*((_QWORD *)this + 179);
  v5 = 0;
  if ( v4 == v2 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    v7 = (_QWORD *)*((_QWORD *)v4 + 1);
    v8 = *(_QWORD *)v4;
    v9 = *((_DWORD *)v4 + 4);
    *v7 = *(_QWORD *)v4;
    *(_QWORD *)(v8 + 8) = v7;
    operator delete(v4);
    --*((_QWORD *)v2 + 2);
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *(_DWORD *)a2 = v9;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 177);
  }
  return v5;
}
