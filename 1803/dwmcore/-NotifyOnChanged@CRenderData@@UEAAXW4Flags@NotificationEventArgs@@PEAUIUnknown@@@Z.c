/*
 * XREFs of ?NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800571B0
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029910 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x180057C30 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 result; // rax

  v4 = a2;
  if ( ((a2 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == 1 )
      v4 = 6;
  }
  else
  {
    v4 = 0;
  }
  v6 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) == 2
    && (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v4) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 2) != 0 )
      v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v7) = v7 & 1;
    if ( (_DWORD)v7 )
    {
      v8 = 0LL;
      v9 = (unsigned int)v7;
      v10 = 2LL;
      do
      {
        v11 = *(_QWORD *)(a1 + 24);
        v12 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (v11 & 2) != 0 )
          v13 = *v12;
        else
          v13 = v11 & 1;
        if ( v8 >= v13 )
        {
          v14 = 0LL;
        }
        else if ( v13 == 1 )
        {
          v14 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          v14 = v12[v10];
        }
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)a1 + 72LL))(a1, v14, v4, a3);
        ++v8;
        ++v10;
        --v9;
      }
      while ( v9 );
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  result = (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  *(_DWORD *)(a1 + 32) ^= result;
  return result;
}
