/*
 * XREFs of ?TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180057634
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180055834 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180055860 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x180058BA8 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 */

void __fastcall MPCHolographicInputManager::TickAndUpdateCursorsForProviders(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  struct MPCGamepadInputHelper *Instance; // r8
  __int64 v7; // rax
  char v8; // dl
  char v9; // al
  __int128 v10; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall **v11)(); // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall ***v13)(); // [rsp+68h] [rbp-10h]
  struct InputInfo *v14; // [rsp+88h] [rbp+10h] BYREF

  v14 = a2;
  if ( *((_DWORD *)a2 + 174) == 8 )
  {
    Instance = MPCGamepadInputHelper::GetInstance((__int64)this, (__int64)a2, a3, a4);
    v7 = *((_QWORD *)a2 + 102);
    if ( v7 == *((_QWORD *)Instance + 1) || v7 == *((_QWORD *)Instance + 2) )
    {
      v8 = 1;
      if ( !*((_BYTE *)a2 + 776) || (v9 = 1, *((_BYTE *)a2 + 778)) )
        v9 = 0;
      *((_BYTE *)Instance + 38) = v9;
      if ( !v9 || *((_DWORD *)a2 + 202) )
        v8 = 0;
      *((_BYTE *)Instance + 39) = v8;
    }
    else
    {
      *((_WORD *)Instance + 19) = 0;
    }
    *((_BYTE *)Instance + 40) = *((_BYTE *)a2 + 848) != 0;
    MPCGamepadInputHelper::UpdateGamepadFocus(Instance);
    *(_QWORD *)&v10 = this;
    *((_QWORD *)&v10 + 1) = &v14;
    v11 = off_1800D6358;
    v13 = &v11;
    v12 = v10;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v11);
  }
}
