/*
 * XREFs of ?SetEndpointType@EndpointDevice@@UEAAJAEBU_GUID@@H@Z @ 0x1800EA510
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z @ 0x1800EA3F0 (-SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall EndpointDevice::SetEndpointType(EndpointDevice *this, const struct _GUID *a2, int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rax

  v6 = 0;
  v7 = EndpointDevice::SetAdapterClass(this, a2);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)&a2->Data1 - ADAPTERCLASS_PHONE_PRIMARY;
    if ( *(_QWORD *)&a2->Data1 == ADAPTERCLASS_PHONE_PRIMARY )
      v8 = *(_QWORD *)a2->Data4 - 0x43E300083B428C85LL;
    if ( v8 )
    {
      *((_DWORD *)this + 21) = 1;
    }
    else
    {
      *((_DWORD *)this + 22) = 1;
      *((_DWORD *)this + 21) = (a3 != 0) + 1;
    }
  }
  else
  {
    return (unsigned int)v7;
  }
  return v6;
}
