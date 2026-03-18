/*
 * XREFs of ?AddNotificationToken@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007DF00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C007DDE4 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 */

__int64 __fastcall SfmTokenArray::AddNotificationToken(SfmTokenArray *this, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  int v4; // r8d
  unsigned int v5; // ecx
  __int64 v6; // rax

  v4 = SfmTokenArray::EnsureTokenBufferSize(this, 1);
  if ( v4 >= 0 )
  {
    v5 = ++*((_DWORD *)this + 3);
    if ( v5 > *((_DWORD *)this + 2) )
      *((_DWORD *)this + 2) = v5;
    v6 = *(_QWORD *)this + 40 * v5 - 40;
    a2->Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
    a2->TokenSize = 40;
    *(_OWORD *)v6 = *(_OWORD *)&a2->Model;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)&a2->Token.Flip.FenceValue;
    *(_QWORD *)(v6 + 32) = a2->Token.Flip.dxgContext;
  }
  return (unsigned int)v4;
}
