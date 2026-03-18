/*
 * XREFs of ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x18007EE78
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18007ECD0 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CD3DConstantBuffer::Initialize(
        CD3DConstantBuffer *this,
        struct CD3DResourceManager *a2,
        int a3,
        struct ID3D11Buffer *a4)
{
  struct CD3DResourceManager *v4; // rax
  struct CD3DResourceManager **v7; // r9
  unsigned int v9; // eax
  struct ID3D11Buffer *v11; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 16) = a3;
  v4 = (CD3DConstantBuffer *)((char *)this + 32);
  *((_BYTE *)this + 69) = 1;
  v7 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
  if ( *v7 != (struct CD3DResourceManager *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)a2 + 32;
  *((_QWORD *)this + 5) = v7;
  *v7 = v4;
  *((_QWORD *)a2 + 5) = v4;
  if ( *((_BYTE *)this + 68) )
    ++*((_DWORD *)a2 + 18);
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 16);
  v9 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v9 )
    *((_DWORD *)a2 + 13) = v9;
  *((_QWORD *)this + 2) = a2;
  if ( *((struct ID3D11Buffer **)this + 15) != a4 )
  {
    v11 = a4;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v11);
    v11 = (struct ID3D11Buffer *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = a4;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v11);
  }
  *((_DWORD *)this + 32) = a3;
  return 0LL;
}
